#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",num);
    for(int i=0;i<=num;i++){
        if(i<num/2){
            printf("Tumse na ho payga");
            break;
        }
    for(int j=0;j<=num;j++){
         if(i%3==0){
            printf("Tumsee syd ho jay");
            continue;
        }
    }
    }
}