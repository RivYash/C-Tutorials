#include<stdio.h>



float convertTemp(float celsius);

int main(){
    int a;
    printf("enter the celsius");
    scanf("%f",&a);
    float far = convertTemp(a);
    printf("conversion is %f F ",far);

    return 0;

}



float convertTemp(float celsius){
    float far = celsius*(9/5)+32;
    return far;
}
