//to check whether a array is palindrome or not
#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the elements of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int check=1;
    for(int i=0;i<5/2;i++){
        if(a[i]!=a[5-1-i]){
            check=0;
        }
    }
    if(check){
        printf("It is palindrome");
    }else{
        printf("It is not palindrome");
    }
}