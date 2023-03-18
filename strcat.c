#include<stdio.h>
#include<string.h>


void printString(char arr[]);

int main(){
    char oldStr[100] = "hello";
    char newStr[] = "world";

    strcat(newStr,oldStr);
    puts(newStr);


}



// concatination in c
