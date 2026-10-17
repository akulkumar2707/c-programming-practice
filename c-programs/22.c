#include <stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(int a, int b);

int main() {
    float side = 6.0;
    float rad = 4.0;
    int a = 5;
    int b = 3;

    printf("Area of square is %f\n", squareArea(side));
    printf("Area of circle is %f\n", circleArea(rad));
    printf("Area of rectangle is %f\n", rectangleArea(a, b));

    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14 * rad * rad;
}

float rectangleArea(int a, int b) {
    return a * b;
}