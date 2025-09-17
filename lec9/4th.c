#include<stdio.h>
int main(){
    int n;
    char m=65;
    printf("Enter number of repetitions: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("%c",m);
        }
        for(int l=1;l<i;l++){
            printf("%c",m);
        }
        printf("\n");
        m++;
    }
}