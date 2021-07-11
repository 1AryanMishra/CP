Node* partition(Node *s, Node *e){

        // Declaring iterartor pointer variable and pivot pointer variable
        
        Node* itr = s;
        Node* pivot = s;
        
        // Flag variable just to keep watch on first node case where pivot does not needs to go to next Node and swap as its the first case
        bool flag = false;
        
        // Running loop
        
        while(itr != e->next){
            if(itr->data <= e->data){

                if(flag){
                    pivot = pivot->next;
                    swap(&(itr->data), &(pivot->data));
                }
                else{
                    swap(&(itr->data), &(pivot->data));
                    flag = true;
                }
            }
            itr = itr->next;
        }

        return pivot;

}
