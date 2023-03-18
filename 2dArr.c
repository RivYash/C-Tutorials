#include<stdio.h>

int main(){
    //2 x 3
    int marks[2][3];   //_ _ _ | _ _ _
    marks[0][0] = 96;
    marks[0][1] = 53;
    marks[0][2] = 96;

    marks[1][0] = 77;
    marks[1][1] = 63;
    marks[1][2] = 78;


    printf("%d", marks[0][0]);
    return 0;
}