
//exiting on odd number


#include<stdio.h>
int main(){
    int n;
    do
    {
        printf("enter even numbers only! \n");
        scanf("%d",&n);
        printf("checking...\n");
        // delay(5);
        
        if(n % 2 != 0){
            break;
        }
    } while (1);
    printf("you faild entering only even numbers\n");
    
    
}

