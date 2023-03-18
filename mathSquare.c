#include<stdio.h>
#include<math.h>

void square(int n);

int main(){
    int n;
    printf("enter the the number: ");
    scanf("%d",&n);

    square(n);

}

void square(int n){
    printf("%f",pow(n,2));
}