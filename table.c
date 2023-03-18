#include<stdio.h>


void main(){
    int n,mul;
    printf("enter the table till you want");
    scanf("%d",&n);


    for (int i = 1; i <= 10; i++)
    {
        mul= n*i;
        printf("%d\n",mul);
    }
}
