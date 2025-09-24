//to print array in spiral
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Before change\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Spiral\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0){
                printf("%d ",a[i][j]);
            }
            if(j==2 && i!=0){
                printf("%d ",a[i][j]);
            }
        }
         for(int j=2;j>=0;j--){
            if(i==2 && j!=2){
                printf("%d ",a[i][j]);
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1 && j!=2 && i!=2){
                printf("%d ",a[i][j]);
            }
        }
    }
}
