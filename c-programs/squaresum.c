//wap to find the sum of squares of first n natural numbers
#include <stdio.h>

int main(){
    int n, i;
    long sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum = sum + (i * i);
    }
    printf("Sum of squares from 1 to %d = %ld\n", n, sum);
    return 0;
}