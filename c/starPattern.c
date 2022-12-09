// #include <stdio.h>
//     int star_pattern(int n){
     
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }    printf("\n");
//     }
    
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("the pattern size is\n");
//     scanf("%d", &n);

//     printf("star triangle pattern is are as follow\n");
//     printf("%s", star_pattern(n));
//     return 0;
// }


// #include <stdio.h>
//     int star_pattern(int n){
     
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             printf("*");
//         }    printf("\n");
//     }
    
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("the pattern size is\n");
//     scanf("%d", &n);

//     printf("star triangle pattern is are as follow\n");
//     printf("%s", star_pattern(n));
//     return 0;
// }


#include <stdio.h>
    int star_pattern(int n){
     
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("%d", 1+i);
        }    printf("\n");
    }
    
    return 0;
}
int main()
{
    int n;
    printf("the pattern size is\n");
    scanf("%d", &n);

    printf("star triangle pattern is are as follow\n");
    printf("%s", star_pattern(n));
    return 0;
}
