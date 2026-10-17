//wap to print the series and find its sum
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
 num = num + i;
    }
    printf(" = %ld\n", sum);
    return 0;
}