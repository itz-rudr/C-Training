#include<stdio.h>
int main(){
    int a[5];
    int n;
    printf("Enter the elements of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search \n");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(n==a[i]){
            printf("Found at index no. = %d\n",i);
            
        }
    }
}