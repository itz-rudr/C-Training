#include<stdio.h>
int main(){
    int arr[5]={1,-2,3,-4,6};
    int n,i,j,k;
    int maxsum=0;
    for(i=0;i<5;i++){
        int sum=0;
        for(j=i;j<5;j++){
            sum=sum+arr[j];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    printf("%d",maxsum);
}