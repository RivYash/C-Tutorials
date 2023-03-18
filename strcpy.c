#include<stdio.h>
#include<string.h>

void printString(char arr[]);

int main(){
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";

    strcpy(newStr,oldStr);
    puts(newStr);

}
