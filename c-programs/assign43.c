//wap to print cubes of numbers divisible by 3
 #include<stdio.h>

int main()
{
    int n, i, cube;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("Cubes of numbers divisible by 3:\n");
    
    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
        {
            cube = i * i * i;
            printf("%d\n", cube);
        }
    }
    
    return 0;
}
