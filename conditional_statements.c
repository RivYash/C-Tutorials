#include<stdio.h>
 int main(){
    int age;
    printf("enter your age ");
    scanf("%d",&age);

    if(age>=18){
        printf("your are an adult");
    }
    else{
        printf("you need to gro up kiddo");
    }
    return 0;
 }