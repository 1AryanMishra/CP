int transitionPoint(int arr[], int n) {
    // code here
    int start = 0, end = n-1, i = 0;
    while(i<n){
        if(arr[(start + end)/2] == 1 && arr[((start + end)/2)-1] == 0){
            return (start + end)/2;
        }
        else if(arr[(start + end)/2] == 1){
            end = ((start + end)/2)-1;
        }
        else{
            start = ((start + end)/2)+1;
        }
        i++;
    }
    return -1;
}
