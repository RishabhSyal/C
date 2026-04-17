#include <stdio.h>
#include <math.h>

void prime(int x){

    if (x>2){
        printf("2 ");
        for (int i=3; i<x; i++){
            int flag = 0;
            for (int j=2; j*j<=i; j++){
                if (i%j==0){
                    flag = 1;
                    break;
                }
            }
            if (flag==0){
                printf("%d ", i);
            }
        }
    }
}



int main(){
    int x;
    scanf("%d", &x);

    prime(x);
}
