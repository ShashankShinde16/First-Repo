#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2] = {{2, 3},
                   {3, 2}};
    int b[2][2] = {{4, 5},
                   {3, 1}};
    int c[2][2] = {{0, 0},
                   {0, 0}};
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
    printf("the multi a and b metrix is\n");
    for (int i = 0; i < 2; i++)
    {
        int j;
        for (j = 0; j < 2; j++)
        {
            //    c[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
