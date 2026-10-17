//wap to check whether a matrix is symmetric
#include <stdio.h>  
#define SIZE 3
int main(){
    int mat[SIZE][SIZE],i,j,flag=1;
    printf("enter the elements of matrix (%d x %d)",SIZE,SIZE);
    for(i=0;i<SIZE;i++)
    for(j=0;j<SIZE;j++)
    scanf("%d",&mat[i][j]);
    for(i=0;i<SIZE;i++)
    {
        for (j=0;j<SIZE;j++)
        {

            if(mat[i][j]!=mat[j][i])
            flag=0;

        }



    }
    if(flag==1)
    printf("matrix is symmetric ");
    else
    printf("matrix is not symmetric");
    
    
    return 0;
}