#include<stdio.h>

int main(){

    int day;   //1-mon 2-tue 3-wed 4-thu 5-fri 6-sat
    printf("enter the day from 1-7");
    scanf("%d",&day);


    switch(day){
        case 1 : printf("monday\n");
        break;
        case 2 : printf("tue\n");
        break;
        case 3 : printf("wed\n");
        break;
        case 4 : printf("thu\n");
        break;
        case 5 : printf("fri\n");
        break;
        case 6 : printf("sat\n");
        break;
        case 7 : printf("sun\n");
        break;
        default : printf("invalid day");
    }
}