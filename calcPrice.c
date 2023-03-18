#include<stdio.h>
void calculatePrice(float value);

int main(){
    float value = 100.00;
    calculatePrice(value);

}


void calculatePrice(float value){
    value = value+(0.18*value);
    printf("final price is: %f",value); 
}
