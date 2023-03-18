#include<stdio.h>
int main(){
    char ch;
    printf("enter the char");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' ){
        printf("uppercase");

    }else if(ch>='a'&& ch<='z'){
        printf("lower case");
    }else{
        printf("unknown char");
    }

    return 0;
}