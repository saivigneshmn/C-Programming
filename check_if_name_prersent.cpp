/* Algorithm for Checking if name is present in the list
step 1: start program
step 2: then we have declare the varaiables
step 3: now let the user enter the input
step 4: split by space
step 5: then iterate through names comparing and checking for the name
step 6: print the result
step 7: end the program */

#include <stdio.h> 
#include <string.h>

int main() {
	char names [5][20]= {"John" , "Claire", "Ford", "Prefect", "Jake"};
	char name[20];
	int pos;
	
	printf("Enter your full name: ");
	gets (name);
	
	for (int i = 0; i < strlen(name); i++)
	{
		if (name[i]== ' '){
			pos = i;
			break;
		}
	}
	
	char first_name[20];
    strcpy(first_name, name);
    first_name[pos] = '\0';
	
		
	for (int i=0;i<5;i++)
	{
		if(strcmp(first_name, names[i]) == 0) {
			printf("The first name %s is present in the list and the persons full name is %s.", first_name, name);
		}
    } 
	
	return 0;
}
