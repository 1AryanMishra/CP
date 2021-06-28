class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int> v;
        n--;
        int l = arr[n];
        v.push_back(l);
        while(n--){
            if(arr[n] > l){
                v.push_back(l);
            }
        }
        return v;
        
    }
};
