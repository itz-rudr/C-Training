//to print pair of elements whose sum is 7
#include<stdio.h>
int main(){
    int a[7]={1,3,4,6,-5,5,1};
    int k=7;
    for(int i=0;i<7;i++){
        for(int j=i-1;j<7;j++){
            if(a[i]+a[j]==k){
                printf("Obtained Pair whose sum is 7 is %d %d\n",a[i],a[j]);
            }
        }
    }
}