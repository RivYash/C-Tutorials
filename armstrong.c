#include<stdio.h>
#include<math.h>

int main(){
    int n,num1,num2,num3,sum;
    int p=3;
    printf("enter the number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    // printf("%d%d%d",num1,num2,num3);

    int a=pow(num1,p);
    int b=pow(num2,p);
    int c=pow(num3,p);

    // printf("%d%d%d",a,b,c);

    sum = a+b+c;

    }