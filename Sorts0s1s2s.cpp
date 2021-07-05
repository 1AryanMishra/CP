class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        
        int z = 0, o = 0, i = 0;

        while(i < n){
            if(arr[i] == 0){
                swap(arr[i], arr[z]);
                z++;
                if(arr[i] == 1){
                    if(o < z){
                        o = z;
                    }
                    swap(arr[i], arr[o]);
                    o++;
                }
            }
    
            else if(arr[i] == 1){
                if(o < z){
                    o = z;
                }
                swap(arr[i], arr[o]);
                o++;
            }
            i++;
        }
    }
    
};
