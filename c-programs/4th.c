//wap to find sum of even digits and product of odd digits of a six-digit number
#include <stdio.h>

int main(){
    long num;
    int digit, even_sum = 0, odd_product = 1;
    
    printf("Enter a six-digit number: ");
    scanf("%ld", &num);
    
    while(num > 0){
        digit = num % 10;
        
        if(digit % 2 == 0){
            even_sum = even_sum + digit;
        } else {
            odd_product = odd_product * digit;
        }
        
        num = num / 10;
    }
    
    printf("Sum of even digits: %d\n", even_sum);
    printf("Product of odd digits: %d\n", odd_product);
    
    return 0;
}