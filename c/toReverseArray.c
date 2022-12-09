#include <stdio.h>
void arrayrev(int* arr)
{
   int rev[5];
   for (int k = 0; k <= 4; k++)
   {
     rev[k] = arr[k];
   }
   
    for (int i = 0; i <= 4; i++)
    {
        arr[i] = arr[4 - i];
        printf("%d\t", arr[i]);  
        arr[i] = rev[i];
    }
    
}
int main()
{
    int arr[] = {2, 6, 5, 9, 3};
    printf("the array is\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arrayrev(arr);
    return 0;
}
