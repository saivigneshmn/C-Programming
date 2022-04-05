#include <stdio.h>
int main()
{
	int i = 0 ;
    begin: // 1st Label
         printf("i = %d\n", i);
         i++;

        if(i>=10)
        {
        	goto end; // If i==10 it goes to (end) Label 
		}

        
        goto begin; // When the program reaches this part it again goes to the begin Label


    end: // 2nd Label
    printf("End\n");

		   
}