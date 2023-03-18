#include<stdio.h>


int sum(int a,int b);
int table(int n);

int main(){
    int a,b,n;

    // printf("enter the value of a: ");
    // scanf("%d",&a);
    // printf("enter the value of b: ");
    // scanf("%d",&b);

    // int s = sum(a,b);
    // printf("%d",s);
    printf("enter the number: ");
    scanf("%d",&n);
    table(n);
}


int sum(int a,int b){
    return a+b;
}

int table(int n){
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",i*n);
    }
    
}