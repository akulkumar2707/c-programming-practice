//wap to find the sum of the series 1 + 11 + 111 + ...
#include <stdio.h>

int main(){
    int n, i;
    long num = 1, sum = 0;
    printf("Enter n (number of terms): ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%ld", num);
        sum = sum + num;
        if(i < n) printf(" + ");
        num = num * 10 + 1;
    }
    printf(" = %ld\n", sum);
    return 0;
}