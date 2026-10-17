//wap to compare salaries of two employees
#include <stdio.h>

int main(void)
{
    float sal1, sal2;

    printf("Salary of Employee 1: ");
    scanf("%f", &sal1);
    printf("Salary of Employee 2: ");
    scanf("%f", &sal2);

    if (sal1 > sal2) {
        printf("Employee 1 earns more: %.2f\n", sal1);
    } else if (sal2 > sal1) {
        printf("Employee 2 earns more: %.2f\n", sal2);
    } else {
        printf("Both earn same: %.2f\n", sal1);
    }

    return 0;
}
