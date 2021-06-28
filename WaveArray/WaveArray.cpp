class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int *arr, int n){
        int index = 0;
        if(n%2 != 0){
            n = n-1;
        }
        while(index<n){
            swap(arr[index], arr[index + 1]);
            index = index + 2;
        }
        return;
        
    }
};
