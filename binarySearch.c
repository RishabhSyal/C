#include <stdio.h>

int BinarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size-1;

    while (low<= high){
        int mid = (low+high)/2;

        if (arr[mid] == target){
            return mid;
        } else if (arr[mid]< target){
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}


void bubbleSort(int arr[], int size){
    for (int i=0; i<size-1; i++){
        for (int j = 0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {9,4,6,2,24,463,1,5,12,64,22,13};
    int size = 12;
    int target = 64;
    printf("Original Array: ");
    for (int i =0; i< size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size);

    printf("Sorted Array: ");

    for (int i = 0; i<size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
    int result =  BinarySearch(arr, size, target);

    if (result!=-1){
        printf("%d found at %d position", target, result+1);
    } else {
        printf("Target element not found");
    }
}
