#include<stdio.h>
#include<string.h>


typedef struct bankAccount
{
    char name[100];
    int  accountNo;

}acc;

int main(){

    acc acc1 = {123, "yash"};
    acc acc2 = {124, "prachi"};
    acc acc3 = {125, "siya"};

    printf("acc no = %d",acc1.accountNo);
    printf("acc no = %s",acc1.name);

    return 0;


    

}