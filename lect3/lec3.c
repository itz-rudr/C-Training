#include <stdio.h>
int main(){
    //if else conditional operator
    //Grade Checker 
    int a,m;
    printf("Enter Attendence: ");
    scanf("%d",&a);
    printf("Enter Marks: ");
    scanf("%d",&m);
    if(a>75 && m>=75){
        printf("A");
    }else if(a>75 && m<75 && m>=65){
        printf("B");
    }else if(a>75 && m<65 && m>=55){
        printf("C");
    }else if(a>75 && m<55 && m>=45){
        printf("D");
    }else if(a>75 && m<45 && m>=33){
        printf("E");
    }else{
        printf("F");
    }
}