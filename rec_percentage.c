#include<stdio.h>

int calcPercentage(int math , int science , int sanskrit);

int main(){
    int sc = 98;
    int math = 92;
    int sanskrit = 99;

    printf("percentage is %d",calcPercentage(sc,math,sanskrit));
}


int calcPercentage(int math , int science , int sanskrit){
    return (science+math+sanskrit/3)*100;
}