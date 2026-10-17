//wap to check whether a number is a palindrome using a function
#include <stdio.h>

int main(){
    int num;
    printf("enter your number: ");
    scanf("%d",&num);
    if(num==reverse(num))
     printf("%d is pallindrome",num);
     else
     printf("%d is not pallindrome",num);
    return 0;
}
int reverse(int n)
{   int rev=0,rem;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        return rev;
        





    }

}














int main(){
    int num,rev=0,rem;
    printf("enter the number");
   scanf("%d", &num);
    int n=num;
    while (n>0)
    {
           rem=n%10;
           rev=rev*10+rem;
           n=n/10; 
    }
    if(num==rev)
        printf("%d is pallindrom",num);
        else 
        printf("%d is not pallindrom",num);
    return 0;
}