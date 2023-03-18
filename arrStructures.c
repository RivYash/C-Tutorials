#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name [100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 2001;
    ece[0].cgpa = 9.4;
    strcpy(ece[0].name , "yash");



    // struct student s1 = {2001,4.2,"yash"};
// all in single line



    printf("name = %s\n", ece[0].name);
    return 0;
}