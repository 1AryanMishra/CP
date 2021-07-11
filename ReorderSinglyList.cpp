class Solution {
public:
    
  // Creating reversee function to reverse the links of second half nodes of the list
        ListNode* reversee(ListNode* e){
            ListNode* prev = e;
            ListNode* curr = e->next;
          
          //Checking for base case scenario when there are no nodes to reorder 
          //Just one node
            if(curr == NULL){
                return prev;
            }
            ListNode* next = curr->next;
          
          // Making the next link to the last node of first half list as NULL
            e->next = NULL;
            while(next){
                curr->next = prev;
                prev = curr;
                curr = next;
                next = next->next;
            }
            curr->next = prev;

            return curr;
        }


  // Creating a switch function to reorder the links of the nodes with recursion
  
        void add(ListNode* head, ListNode* e){
            if(head == NULL || e == NULL){
                return;
            }
            ListNode* start = head->next;
            ListNode* last = e->next;

            head->next = e;
            e->next = start;

            add(start, last);
            return;
        }


    // THE FINAL FUNCTION THAT REORDERS THE NODES AS EXPECTED

        void reorderList(ListNode* head) {
            
            ListNode* e = head;
          
          // Counting number of elements in the list
            int n = 0;
            while(e){
                n++;
                e = e->next;
            }
            
          // Getting the index of last element of the first half of the list
            e = head;
            int i;
            if(n%2 == 0){
                i = (n/2)-1;
            }
            else{
                i = n/2;
            }

          // Getting to the last node in the first half of the list
            while(i--){
                e = e->next;
            }

          // Reversing the links
            e = reversee(e);


          // RORDERING THE NODES AS EXPECTED
            add(head, e);
            return;
        }
};
