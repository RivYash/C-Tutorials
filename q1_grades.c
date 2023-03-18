#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks: ");
    scanf("%d",&marks);
     
    if(marks<30 && marks>=15){
        printf("C");
    }else if(marks >= 30 && marks<70){
        printf("B");
    }else if(marks >= 70 && marks < 100){
        printf("A");
    }
    else{
        printf("fail");
    }
}