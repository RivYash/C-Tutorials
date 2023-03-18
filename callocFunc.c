#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    ptr = (int *) calloc(5,sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%f\n",ptr[i]);
    }

    free(ptr);
    ptr = (int *) calloc(5,sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%f\n",ptr[i]);
    }

    // float*ptr;
    // ptr = (float *) calloc(5,sizeof(float));

    // for (int i = 0; i < 5; i++){
    //     printf("%f\n",ptr[i]);
    // }

    
}