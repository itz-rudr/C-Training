#include<stdio.h>
int main(){
    int n,k=0;
    printf("Enter number of repetitions: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",k++);
        }
        printf("\n");
    }
}