//wap to print cubes of numbers divisible by 3
#include <stdio.h>

int main(){
    int n, i;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Cubes of numbers divisible by 3:\n");
    for(i = 1; i <= n; i++){
        if(i % 3 == 0){
            printf("%d\n", i * i * i);
        }
    }
    
    return 0;
}