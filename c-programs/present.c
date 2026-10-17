//wap to check whether a digit is present in a number and count it
#include <stdio.h>

int main(){
    int num, digit, count = 0, temp;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    temp = num;
    while(temp > 0){
       if(temp % 10 == digit){
      count++;
    }
        temp = temp / 10;
    }
    if(count > 0){
        printf("Digit %d is present %d times\n", digit, count);
    } else {
        printf("Digit %d is not present\n", digit);
    }
    return 0;
}