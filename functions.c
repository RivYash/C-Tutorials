#include<stdio.h>

void printNamaste();
void sayBonjour();

int main(){

    char ch;
    printf("enter f for french and i for indian: ");
    scanf("%c",&ch);

    if(ch == 'i'){
        printNamaste();
    }else{
        sayBonjour();
    }

}




void printNamaste(){
    printf("namaste\n");
}


void sayBonjour(){
    printf("bonjour");
}