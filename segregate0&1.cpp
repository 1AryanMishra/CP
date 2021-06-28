class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int z = 0;
        int i = 0;
        while(i<n){
            if(arr[i] == 0){
                swap(arr[i], arr[z]);
                z++;
            }
            i++;
        }
    }
};
