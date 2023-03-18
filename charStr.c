#include<stdio.h>

void printString(char arr[]);

int main(){

    // char firstName[]  = "yash";
    // char lastName[] = "rivankar";
    // printString(firstName);
    // printString(lastName);

    
    char str[100];
    fgets(str,100,stdin);
    puts(str);





    // char name[50];
    // scanf("%s",name);
    // printf("your name is %s",name);
    return 0;
}

void printString(char arr[]){
    for (int i = 0;arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}