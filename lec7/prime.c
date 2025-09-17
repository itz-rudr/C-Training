//to print prime no b/w 1 to 100
#include<stdio.h>
int main(){
    int num,n,i;
    i=1;
    n=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i<=num/2){
        if(num%i==0){
            n++;
        }
        i++;
    }
    if(n<2){
        printf("It is prime");
    }
    else{
        printf("It is not prime");
    }
}