//wap to convert a 2-D matrix into a 1-D array
#include <stdio.h>
#define ROW 3
#define COL 4
int main(){
    int mat[ROW][COL],arr[ROW*COL],i,j,k=0;
    printf("enter the elements of matrix (%d x %d)",ROW,COL);
    for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    scanf("%d",&mat[i][j]);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            arr[k]=mat[i][j];
            k++;

        }
    }
printf("1-D array is: ");
for(i=0;i<ROW*COL;i++)
printf("%d",arr[i]);



    return 0;
}