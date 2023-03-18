#include<stdio.h>

int fact(int n);

int main(){


    int n;
    scanf("%d",&n);
    printf("sum is %d",fact(n));
    return 0;
}

//recursion function

int fact (int n){

    if(n==1){
        return 1;
    }
    int sumNm1 = fact(n-1);
    int sumN = sumNm1+n;
    return sumN;
}