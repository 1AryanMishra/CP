class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int start = 0, end = n-1, i = 0;
	    while(n--){
	        if(start == end){
	            return arr[start];
	        }
	        if(arr[(start + end)/2] < arr[((start + end)/2)+1]){
	            start = ((start + end)/2) + 1;
	        }
	        else if(arr[(start + end)/2] > arr[((start + end)/2)+1]){
	            end = ((start + end)/2);
	        }
	        
	    }
	}
};
