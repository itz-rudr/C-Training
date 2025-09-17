#include<stdio.h>
int main(){
    float inr,dlr;
    int c;
    dlr=87.85;
    printf("Choose your option\n 1: For Rupee to Dollar\n 2: For Dollar to Rupee");
    scanf("\n%d",&c);
    switch(c){
        case 1: printf("Enter Amount in Rupee: ");
                scanf("%f",&inr);
                printf("Amount in Dollar is: %.2f",inr/dlr);
                break;
        case 2: printf("Enter Amount in Dollar: ");
                scanf("%f",&dlr);
                int inr=87.85;
                printf("Amount in Rupee is: %.2f",inr*dlr);
                break;
        default:printf("Enter valid option");
        break;
}
    }