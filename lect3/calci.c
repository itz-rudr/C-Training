#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter Operator: ");
    scanf("\n%c",&op);
    if(op == '+'){
        printf("%d",a+b);
    }else if(op == '-'){
        printf("%d",a-b);
    }else if(op == '*'){
        printf("%d",a*b);
    }else if(op == '/'){
        if(b!=0){
        printf("%d",a/b);
        }else{printf("Division by zero is invalid");}
    }
    else{
        printf("invalid Operator");
    }

}