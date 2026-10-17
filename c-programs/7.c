//wap to print the series and find its sum
#include <stdio.h>
int main(){
    int n, i, num = 1, sum = 0;
    printf("enter how many terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%d", num);
        sum = sum + num;
        if(i < n)
            printf("+");
        num = num + i;
    }
    printf(" = %d\n", sum);
    
    return 0;
}