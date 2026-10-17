//wap to find the largest among three numbers using nested if else
#include <stdio.h>

int main(){
    int a,b,c,large;
    printf("enter the value of a b and c:");
    scanf("%d%d%d,&a,&b,&c");
    if (a>b){

        if (a>c)

        large=a;
        else
         large=c;
        
    }
    else { 
        if(b>c)
        large=b;
        else
        large=c;
    }
   printf("larger among %d %d and %d\n",a,b,c,large);
    return 0;
}