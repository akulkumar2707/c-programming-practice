//wap to check whether a number is a fibonacci number
#include <stdio.h>

int main(){
    long num, a = 0, b = 1, c;
    
    printf("Enter a number: ");
    scanf("%ld", &num);
    if(num == 0 || num == 1){
    printf("%ld is a Fibonacci number\n", num);
   return 0;
    }
    while(b < num){
    c = a + b;
    a = b;
     b = c;
    }
    if(b == num){
     printf("%ld is a Fibonacci number\n", num);
    } else {
     printf("%ld is not a Fibonacci number\n", num);
    }
    return 0;
}
