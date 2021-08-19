class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       while(del->next->next){
           del->data = del->next->data;
           del = del->next;
       }
       del->data = del->next->data;
       Node* temp = del->next;
       del->next = NULL;
       delete temp;
    }

};
