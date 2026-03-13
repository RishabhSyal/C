#include <stdio.h>

int main(){
    int amount;
    int years; 
    float rate;

    printf("Enter amount in rupees: ");
    scanf("%d", &amount);

    printf("\nEnter years: ");
    scanf("%d", &years);

    printf("Enter rate of interest per annum: ");
    scanf("%f", &rate);

    float interest = 0;
    float total = amount;

    for (int i = 0; i < years; i++){
        interest = (total / 100) * rate;
        total = total + interest;
    }

    printf("Total amount after %d years at %.2f interest rate is %.2f", years, rate, total);
}
