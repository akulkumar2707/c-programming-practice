//wap to convert a lowercase character to uppercase using a function
#include<stdio.h>
char upper(char ch);
int main()
{
    char ch;
    printf("Enter a lower case character: ");
    scanf("%c",&ch);
    printf("Upper case of %c is %c",ch,upper(ch));
    return 0;
}
char upper(char ch)
{
    return ch-32;
}
