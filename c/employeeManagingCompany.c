#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    char* Empl_id;
    // int* id_lenght;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the length of id : ");
        scanf("%d", &x);
        Empl_id = (char*)malloc(x*sizeof(char));
        printf("Enter the id : ");
        for (int j = 0; j < 1; j++)
        {
        scanf("%s", &Empl_id);
        if (Empl_id[x-1] >= x)
        {
            printf("Error\n");
        }else
        {
            printf("%s\n", Empl_id);
        }  
        }
       
    }

    return 0;
}
