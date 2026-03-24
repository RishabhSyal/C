#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    for (int i=0; i<5; i++){
        for (int s = i; s<5; s++){
            for (int e = i; e<=s; e++){
                printf("%d ", arr[e]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// The above function creates all possible continuous arrays from the given array.
