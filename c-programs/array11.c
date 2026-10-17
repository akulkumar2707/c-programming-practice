//wap to check whether all elements of a matrix are distinct
#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int mat[ROW][COL], ARR[ROW * COL], i, j, k = 0, flag = 1;

    printf("Enter the elements of matrix (%d x %d):\n", ROW, COL);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &mat[i][j]);
            ARR[k] = mat[i][j];
            k++;
        }
    }

    for (i=0;i<ROW*COL;i++)
    {
        for(j = i + 1;j<ROW*COL;j++)
        {
            if (ARR[i] == ARR[j])
            {
                flag=0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("All elements of the matrix are distinct.\n");
    else
        printf("Elements of the matrix are not distinct.\n");

    return 0;
}