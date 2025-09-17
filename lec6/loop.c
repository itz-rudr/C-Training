#include<stdio.h>
int main(){
    int num,last_digit,rev,og;
    printf("Enter number to check palindrome: ");
    scanf("%d",&num);
    rev=0;
    og=num;
    while(num!=0){
        last_digit=num%10;
        rev=rev*10+last_digit;
        num=num/10;
    }
    if(rev==og){
        printf("it is a palindrome");
    }else{
        printf("it is not a palindrome");
    }
}
