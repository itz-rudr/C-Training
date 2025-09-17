#include<stdio.h>
int main(){
    int a[10];
    printf("Enter the elements of array \n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int i=0;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Minimum value is = %d",min);
}