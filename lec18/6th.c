#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int ar[3][3]={{11,2,33},{44,5,66},{77,8,99}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(ar[i][j]==arr[i][j]){
                printf("%d ",arr[i][j]);
            }
        }
    }
}