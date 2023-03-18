#include<stdio.h>
#include<string.h>


void printString(char arr[]);

int main(){
    char firstStr[] = "hello";
    char secStr[] = "world";

    printf("%d",strcmp(firstStr,secStr));


}