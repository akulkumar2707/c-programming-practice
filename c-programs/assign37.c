//wap to find the taller of two students using ternary operator
#include <stdio.h>

int main(){
    float h1,h2;
    printf("height of student 1 :");
    scanf("%f",&h1);
    printf("height of student 2: ");
    scanf("%f",&h2);
    float taller = (h1 > h2) ? h1 : h2;
     printf("taller student: %.2f",taller);


    return 0;
}