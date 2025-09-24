#include<stdio.h>
int swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main(){
    int x=10,y=20;
    printf("Value after swapping");
    swap()
    printf("%d %d",x,y);
}