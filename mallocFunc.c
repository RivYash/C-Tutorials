// malloc()
// takes number of bytes to be allocated
//  and returns a pointer of type void

// calloc()

// free()
// realoc()


#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr;
    ptr = (int *) malloc(5*sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i=0;i<5;i++){
        print("%d\n",ptr[i]);
    }

    
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(char));
    return 0;
}