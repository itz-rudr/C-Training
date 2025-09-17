#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the elements of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int f=a[0];
    for(int i=0;i<4;i++){
        a[i]=a[i+1];
    }
    a[4]=f;
    printf("Rotated Array\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}