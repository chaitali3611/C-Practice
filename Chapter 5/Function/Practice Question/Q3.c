#include <stdio.h>
#include <math.h>

float areaSquare(float n);
float areaCircle(float r);
float areaRectangle(float a, float b);

int main(){
    float a = 5.0;
    float b = 3.0;

    printf("area is : %f", areaRectangle(a, b));
    return 0;
}

float areaSquare(float n){
    return n*n;
}

float areaCircle(float r){
    return 3.14*r*r;
}

float areaRectangle(float a, float b){
    return a * b;
}