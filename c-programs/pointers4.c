//wap on pointers4
#include <stdio.h>

int main(){
    int a=3,*pi=&a;
    char b='g',*pc=&b;
    float c=3.45,*pf=&c;
    printf("value of pi address of a = %u\n",pi);
        printf("value of pc address of a = %u\n",pc);
            printf("value of pf address of a = %u\n",pf);
    pi++;
    pc++;
    pf++;
    printf("now value of pi %u\n",pi);
        printf("now value of pc %u\n",pc);
    printf("now value of pf %u\n",pf);

    return 0;
}