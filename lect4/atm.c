#include<stdio.h>
int main(){
    int ch,Balance=2000,Amount;
    printf("Select Choice: \n1. Withdraw\n2. Balance Check\n3. Deposit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("Enter Amount:");
                scanf("\n%d",Amount);
                if(Amount<=Balance){
                    printf("Cash out %d\nRemaining Amount %d",Amount,Balance-Amount);
                }else{
                    printf("Insufficieant Balance");
                }
                break;
        case 2:printf("Remaining Amount: %d",Balance);
        break;
        case 3:printf("Enter Amount:");
                scanf("%d",Amount);
                printf("Remaining Balance: %d",Amount+Balance);
                break;
        default:printf("Enter Valid Choice");
        break;
    }
}