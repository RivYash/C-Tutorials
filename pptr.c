#include<stdio.h>

int i=5;
int * ptr = &i;
int **pptr = &ptr;

int main(){


    printf("%d",**pptr);
    return 0;
}