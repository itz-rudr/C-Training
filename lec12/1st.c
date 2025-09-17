#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d",arr[2]);
    //to print elements of array in a order
    for(int i=0;i<5;i++){
        printf("\n%d",arr[i]);
    }
    //to print elements of array in reverse order
    for(int i=4;i>=0;i--){
        printf("\n%d",arr[i]);
    }
    //To print sum of elements of array.
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("\n%d",sum);
}