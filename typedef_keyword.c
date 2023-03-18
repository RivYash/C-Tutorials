#include<stdio.h>
#include<string.h>

//user defined 
typedef struct student {
    int roll;
    float cgpa;
    char name [100];

}stu;

typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    char name [100];
}coe;



int main(){
    
    coe s1;
    s1.roll = 2001;
    s1.cgpa = 9.2;
    strcpy(s1.name,"yash");

    printf("student name is %d\n",s1.name);
    return 0;

}