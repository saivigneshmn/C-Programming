#include<stdio.h>

int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
   int oned_array[5];
   /*Counter variables for the loop*/
   int i ;
   for(i=0; i<5; i++) 
   {
   	printf("Enter value for oned_array[%d]:", i);
    scanf("%d", &oned_array[i]);
    }

   //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<5; i++) 
   {
    printf("%d ", oned_array[i]);
	}
    return 0;
}
    /* Single Dimensional - 1D array declaration*/
    // Syntax : type array_name[array_size];
    int size = 10;
    int oned_array[20],j,k;

    /*Counter variables for the loop*/
    int i;
    for(i = 0; i < size; i++)
    {
        printf("Enter value for oned_array[%d]:", i);
        scanf("%d", &oned_array[i]);
    }

    // Displaying array elements
    printf("Single Dimensional array elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", oned_array[i]);
    }
    printf("\n");
