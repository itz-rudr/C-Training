#include<stdio.h>
int main(){
    int n;
    printf("Enter number of repetitions: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        for(int l=1;l<i;l++){
            printf("*");
        }
        printf("\n");
    }
}