#include<stdio.h>
int multi(int a, int b){
    return a/b;
}

int main()
{
    int a,b;
    for (int i = 0; i < 10; i++)
    {
    printf("Enter the value of a : ");
    scanf("%d",&a);
      printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("the value is %d\n", multi(a,b));
    if (multi(a,b)>30)
    {
     goto end;
    }
    }
    end:
    return 0;
}
