#include<stdio.h>
#include<math.h>

float areaSq(float side);
float areaRec(float a,float b);
float areaCir(float rad);


int main(){
    float a = 5.0;
    float b = 10.0;

    printf("the area of rec is: %f",areaRec(a,b));
      
}


float areaSq(float side){
    return side*side;
}
float areaRec(float a,float b){
    return a*b;
}
float areaCir(float rad){
    return 3.14*rad*rad;
}