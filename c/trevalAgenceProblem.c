#include <stdio.h>
#include <string.h>
struct driverinfo
{
    char name[10];
    int driving_lisence_no[14];
    char route[9];
    int kms[5];
} di;

int main()
{
    int n = 3;
    printf("the information of drives are : \n");
    for (int i = 1; i <= n ; i++)
    {
        printf("the information of %d driver is are as follow :\n", i);
        printf("the name of driver %d is :\n", i);
        gets(di.name);
        puts(di.name);
        printf("the driving lisence number of driver %d is :\n", i);
        gets(di.driving_lisence_no);
        puts(di.driving_lisence_no);
        printf("the route of driver %d is :\n", i);
        gets(di.route);
        puts(di.route);
        printf("the distance which driver %d trevel so far is:\n", i);
        gets(di.kms);
        puts(di.kms);
    }

    return 0;
}
