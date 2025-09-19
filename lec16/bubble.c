//to bubble sort the elements of array
#include<stdio.h>
int main(){
    int a[5];//={1,55,4,5,65};
    printf("Enter the elements of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Array\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}