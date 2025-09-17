//to count frequency of element in a array
#include<stdio.h>
int main(){
    int a[5];
    int n;
    printf("Enter the elements of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element whose frquency is to be checked\n");
    scanf(" %d",&n);
    int count=0;
    for(int i=0;i<5;i++){
        if(a[i]==n){
            count++;
        }
    }
    printf("Frequency of element is %d",count);
}