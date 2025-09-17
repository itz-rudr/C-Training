#include<stdio.h>
int main(){
    int n,t1=0,t2=1,next;
    printf("Enter the number for Fibonnaci series: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}