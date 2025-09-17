#include<stdio.h>
int main(){
    //Basic Looping statement 
    //to print even no.s
    for(int i=0;i<=10;i++)
    {
        if(i%2==0){
            printf("\n%d",i);
        }
    }
    //to print table
    int n;
    printf("\nEnter no to print table: ");
    scanf("%d",&n);
    for(int i=0;i<=10;i++){
        printf("\n%d",i*n);
    }
    //to print reverse looping
    for(int i=10;i>0;i--){
        printf("\n%d",i);
    }
    //to print sum of i no.s
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("\nsum=%d",sum);
}