#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number ");
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("Fizzbuzz");
    }else if(a%3==0){
        printf("Fizz");
    }else if(a%5==0){
        printf("Buzz");
    }
    else{
        printf("Number not divisible by 3 & 5");
    }
}