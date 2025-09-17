//to print sum of digits of a number
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum=0;
    while (num>0){
        int last_digit;
        last_digit=num%10;
        num=num/10;
        sum=sum+last_digit;
    }
    printf("sum = %d",sum);
}