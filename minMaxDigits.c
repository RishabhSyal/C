#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int digit;
    int max = 0;
    int min = 9;

    while (x>0){
        digit = x%10;
        if (digit>max){
            max = digit;
        }
        if (digit<min){
            min = digit;
        }
        x/=10;
    }
    printf("Maximum digit= %d\n", max);
    printf("Minimum digit= %d", min);
}
