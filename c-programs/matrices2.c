//wap to check that elements of an matrices are distinct 
#include<stdio.h>

int main()
{
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int isDistinct = 1;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            for(int k=0; k<rows; k++)
            {
                for(int l=0; l<cols; l++)
                {
                    if((i != k || j != l) && matrix[i][j] == matrix[k][l])
                    {
                        isDistinct = 0;
                        break;
                    }
                }
                if(isDistinct == 0)
                    break;
            }
            if(isDistinct == 0)
                break;
        }
        if(isDistinct == 0)
            break;
    }
    
    if(isDistinct)
        printf("All elements are distinct\n");
    else
        printf("Matrix has duplicate elements\n");
    
    return 0;
}
