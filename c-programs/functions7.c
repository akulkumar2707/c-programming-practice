// wap to know if the number is armstrong or not 
#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("enter your number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum > 0) {
        remainder = originalNum % 10;
        sum += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (sum == num)
        printf("%d is armstrong\n", num);
    else
        printf("%d is not armstrong\n", num);

    return 0;
}
{
    while (n>0)
    rem=n%10;
    cube=rem*rem*rem;
    







}