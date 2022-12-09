#include<stdio.h>
void swap(int* a){
    for (int i = 0; i < 6; i++)
    { 
        int temp = 0;
        for (int j = 0; j < 6; j++)
        {
        if (a[j] > a[j+1])
        {   
            temp = a[j];                
            a[j] = a[j+1];          
            a[j+1] = temp;     
        }    
        }
  
    }

}
int main(int argc, char const *argv[])
{
   int a[] = {6,5,9,7,2,1};
   swap(a);
   printf("the array in acending order is\n");
   for (int i = 0; i < 6; i++)
   {
    printf("%d", a[i]);
   }
   
    return 0;
}
