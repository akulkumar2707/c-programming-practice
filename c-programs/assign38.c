//wap to convert kilometers into meters and centimeters
#include <stdio.h>

int main(){
    float km;
    printf("enter kilometers");
    scanf("%f", &km);
    float meters =km*1000;
    float cm = meters*100;
    printf("%.2f km= %.2f meters",km,meters);
    printf("%.2f km=%.2f cm",km,cm);
    
    return 0;
}