#include <stdio.h>

int main(){

    int number;
    printf("enter your number");
    scanf("%d",&number);

    if(number >=0 ){
        printf("positive");
        
        number%2 == 0 ? printf("even"):printf("odd");
    }else{
        printf("negative");
    }
}

