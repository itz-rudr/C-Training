#include<stdio.h>
int main(){
    int n;
    printf("Enter number of repetitions: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int a=0;a<i;a++){
            printf("*");
        }
        printf("\n");
    }
}