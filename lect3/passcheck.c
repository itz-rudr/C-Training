#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char pass[10],check[10];
    printf("Enter Password: ");
    scanf("%s",&pass);
    printf("Confirm password: ");
    scanf(" %s",&check);
    if(strcmp(pass,check)==0)
    {
        printf("Password Matched");
    }else{
        printf("Password Not Matched");
    }
}