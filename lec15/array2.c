#include<stdio.h>
int main()
{
   int arr[5]={1,-2,3,-4,6};
    int maxsum=0;
    int cursum=0;
    for(int i=0; i<=5;i++){
        cursum=cursum+arr[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    printf("%d",maxsum);
}