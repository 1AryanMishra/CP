class Solution
{
    public:
    
    
    Node* reverseBetween(Node* head, int m, int n)
    {
        int count = 0;
        Node* temp = head;
      
      // Declaring variables helpful in REORDERING
      
        Node* prev;
        Node* curr;
        Node* next;
        Node* mPos;
      
      // Loop for REORDERING
      
        while(count < n){
            count++;
          
          // Pointing to the LAST NODE OF FIRST HALF of List (IF EXISTS)
          
            if(count < m){
                curr = temp;
            }
          
          // Pointing to the FIRST NODE OF SUBLIST which becomes the LAST NODE
          
            else if(count == m){
                mPos = temp;
                prev = mPos;
            }
          
          // Pointing to the LAST NODE OF SUBLIST which becomes the FIRST NODE
          
            else{
                next = temp->next;
                temp->next = prev;
                prev = temp;
                temp = next;
                continue;
            }
            temp = temp->next;
        }
      
      // LAST NODE OF THE NEW SUBLIST pointing to the FIRST NODE OF THE SECOND HALF OF THE SUBLIST
        mPos->next = temp;
        
        if(m == 1){
          // IF FIRST HALF DOES NOT EXISTS     OR     IF starting of sublist is FIRST NODE ITSELF.
            return prev;
        }
      
      //FIRST NODE OF FIRST HALF (IF EXISTS) pointing to the FIRST NODE OF THE NEW SUBLIST
      
        curr->next = prev;
        return head;
    }
};
