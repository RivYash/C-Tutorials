//printonly even number from 

#include<stdio.h>

void main(){
    int n;
    printf("enter the number till you want: ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        if(i%2 != 0){
            continue;
        }
        printf("%d\n",i);
    }

    
}
