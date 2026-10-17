//wap to count how many times a number occurs in a matrix
#include <stdio.h>
#define ROW 3
#define COL 3
int main(){
    int mat[ROW][COL],i,j,num,count=0;
    printf("enter the elements of matrix (%d x %d )",ROW,COL);
    for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    scanf("%d",&mat[i][j]);
    printf("enter the number to be searched: ");
    scanf("%d",&num);
    for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    if(mat[i][j]==num)
    count++;
    printf("%d occurs %d times in the matrix,num,count");

    return 0;
}