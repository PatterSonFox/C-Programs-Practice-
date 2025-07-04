#include<stdio.h>
#include<math.h>
float circleArea(float rad);
float squareArea(float side);
float rectangleArea(float a, float b);

int main(){
    float a= 5.0;
    float b=10.0;
    printf("Area of rectagle: %f",rectangleArea(a,b));
}
float circleArea(float rad){
    return 3.14*rad*rad;
}
float squareArea(float side){
    return side*side;
}
float rectangleArea(float a, float b){
    return a*b;
}