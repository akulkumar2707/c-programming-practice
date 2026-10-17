//wap to print the size of pointers and the values they point to
#include <stdio.h>

int main(){
    char a='x',*p1=&a;
    int b=12,*p2=&b;
    float c=12.4,*p3=&c;double d=18.3,*p4=&d;
    printf("sizeof(p1)=%d,sizeof(*p1)=%d\n",sizeof(p1),sizeof(*p1));
      printf("sizeof(p2)=%d,sizeof(*p2)=%d\n",sizeof(p2),sizeof(*p2));
        printf("sizeof(p3)=%d,sizeof(*p3)=%d\n",sizeof(p3),sizeof(*p3));
          printf("sizeof(p4)=%d,sizeof(*p4)=%d\n",sizeof(p4),sizeof(*p4));

    return 0;
}