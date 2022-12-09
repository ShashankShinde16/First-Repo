#include <stdio.h>
void sum(int *a, int *b)
{ 
      *a = *a + *b;    
       printf("the sum of a and b in a is %d\n", *a);
       *a = 3;
}
 
void sub(int *a, int *b)
{
     *b = *a - *b;
    printf("the sum of a and b in b is %d\n", *b); 
}
int main()
{
    int a = 3;
    int b = 2;
    sum(&a,&b);
    sub(&a,&b);

    return 0;
}
