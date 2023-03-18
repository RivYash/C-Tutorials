#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5,sizeof(int));

    printf("enter the numbers 5: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    ptr = realloc(ptr,8);
    printf("enter numbers (8): ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d\n", &ptr[i]);
    }

    //print
    for (int i = 0; i < 8; i++)
    {
        printf("num %d is %d\n",i,ptr[i]);

    }return 0;
    

}


//OUTPUT

// PS C:\Users\rivan\OneDrive\Documents\projects\c tutorials> ./a.exe
// enter the numbers 5: 1
// 2
// 3
// 4
// 5
// enter numbers (8): 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// num 0 is 1
// num 1 is 2
// num 2 is 3
// num 3 is 4
// num 4 is 5
// num 5 is 6
// num 6 is 7
// num 7 is 8