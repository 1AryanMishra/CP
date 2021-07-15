// Creating QuickSort function to sort the array 

void qsort(int arr[], int start, int e){

    if(start >= e){
        return;
    }

    int index = start, swapPos = start;
    while(index < e){
        if(arr[index] <= arr[e-1]){
            swap(arr[index], arr[swapPos]);
            swapPos++;
        }
        index++;
    }

    qsort(arr, start, swapPos-1);
    qsort(arr, swapPos, e);

    return;


}

/* The function which takes array as arr and QuickSorting which makes no difference in the 
positioning of the similar elements as the sorted element will be 
inserted at greater index as of the pivot*/
// [1, 4(1), 6(2), 4(3), 7, 9, 0, 6(7), 4(8)]
// Sorted array is [ 0, 1, 4(1), 4(3), 4(8), 6(2), 6(7), 7, 9]

long long int calculate(int arr[], int n)
{
    // Complete the function
    qsort(arr, 0, n);
    long long int answer = 0;
    int elementCount = 0, index = 1, element = arr[0];

    while(index < n){
        if(arr[index] == element){
            elementCount++;
        }
        else{
            if(elementCount == 0){
                element = arr[index];
                index++;
                continue;
            }
            else if(elementCount % 2 == 0){
                answer = ((elementCount/2) * (elementCount + 1)) + answer;
            }
            else{
                answer = (elementCount * ((elementCount + 1)/2)) + answer;
            }

            element = arr[index];
            elementCount = 0;
        }
        index++;
    }

    if(elementCount % 2 == 0){
        answer = ((elementCount/2) * (elementCount + 1)) + answer;
    }
    else{
        answer = (elementCount * ((elementCount + 1)/2)) + answer;
    }

    return answer;
}
