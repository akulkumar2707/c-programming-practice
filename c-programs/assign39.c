//wap to find area and perimeter of a square
#include <stdio.h>

int main(){
    float side;
    printf("enter the side of the square");
    scanf("%f",&side);
    float area = side*side;
    float perimeter = 4*side;
    printf("area=%.2f",area);
    printf("perimeter=%.2f",perimeter);

    return 0;
}