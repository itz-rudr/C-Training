//to print sum of two pairs
#include<stdio.h>
int main(){
    int a[5];
    printf("Enter the elements of array \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0]+a[1];
     for(int i=0;i<5;i++){
        for(int j=i-1;j<5;j++){
            if(a[i]+a[j]>max){
                max=a[i]+a[j];
            }
        }
    }
     printf("Pair with maximum value is %d",max);
}
