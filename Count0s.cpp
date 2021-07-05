class Solution{   
public:


    int countZeroes(int arr[], int n) {
        
        int s = 0;
        int e = n-1;
        int f = 0;
        while(s<=e){
            if(arr[(s+e)/2] > 0){
                s = ((s+e)/2)+1;
            }
            else if(arr[(s+e)/2] == 0 && arr[((s+e)/2)-1] == 1){
                f = (s+e)/2;
                break;
            }
            else{
                e = ((s+e)/2)-1;
            }
        }
        return n-f;
        
    }
    
};
