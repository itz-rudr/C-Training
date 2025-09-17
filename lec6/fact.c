#include<stdio.h>
int main(){
    int num,i;
    long int fact;
    fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("Factorial of no. is: %d",fact);
}