#include <stdio.h>

int main(){
    int arr[8] = {1,5,100,25,67,34,13,45};
    for (int i = 0; i<8;i++){
        for (int j =0; j<9;j++){
            if (arr[i]<arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (int i = 0;i<8;i++){
        printf("%d, ", arr[i]);
    }
}
