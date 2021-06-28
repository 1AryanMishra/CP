int findEquilibrium(int arr[], int n)
{
  //Your code here
  int t = 0;
  int i = 0;
  while(i<n){
      t = t + arr[i];
      i++;
  }
  i = 0;
  int l = 0;
  while(i<n){
      if(t - (l+arr[i]) == l){
          return i;
      }
      l = l + arr[i];
      i++;
  }
  return -1;
}
