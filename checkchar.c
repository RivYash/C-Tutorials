#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main(){
    char str[] = "hello bazaar";
    char ch = 'z';
    checkChar(str,ch);
}

void checkChar(char str[], char ch){
    for (int i = 0;str[i] != '\n'; i++)
    {
        if(str[i] == ch){
            printf("character is present");
            return;
        }
    }
    printf("char not present ");
    
}