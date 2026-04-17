#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int digit;
    int sum=0;
    int original = x;

    while (x>0){
        int prod = 1;
        digit = x%10;
        for (int i=1; i<digit+1; i++){
            prod*=i;
        }
        sum+=prod;
        x/=10;
    }
    if (sum==original){
        printf("%d is a strong number", original);
    } else {
        printf("%d is not a strong number", original);
    }
}
