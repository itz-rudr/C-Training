#include<stdio.h>
int main(){
    int a[10];
    printf("Enter the elements of array \n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum value is = %d",max);
}