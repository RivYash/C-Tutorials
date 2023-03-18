#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};



int main(){
    struct student s1;
    s1.roll = 2021;
    s1.cgpa = 9.2;
    // s1.name = "yash";
    strcpy(s1.name, "yash");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 2043;
    s2.cgpa = 8.4;
    strcpy(s2.name,"jamu");
    printf("stdudent name = %s\n",s2.name);
    printf("student roll = %d\n",s2.roll);
    printf("student cgpa = %f\n ",s2.cgpa);


    struct student s3;
    s3.roll = 3023;
    s3.cgpa = 9.3;
    // s1.name = "yash";
    strcpy(s3.name, "mandela");
    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);





    return 0;

}