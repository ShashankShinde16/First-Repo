#include <stdio.h>
int main()
{
    int a[2][2] = {{2, 3},
                   {3, 2}};
    int b[2][2] = {{4, 5},
                   {3, 1}};
    int c[2][2];
    printf("the matrix a is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("the matrix b is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("the sum a and b metrix is\n");
    for (int i = 0; i < 2; i++)
    {
     for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf(" %d\t", c[i][j]);
        }printf("\n");
    }
    

    return 0;
}
