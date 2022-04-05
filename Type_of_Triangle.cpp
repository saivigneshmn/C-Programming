/* Algoritham to find type of triangle 
Step 1: Declare three sides of triangle. 
Step 2: Enter three sides at run time. 
Step 3: If side1 == side2 && side2 == side3 Go to step 6 
Step 4: If side1 == side2  side2 == side3  side3 == side1 Go to Step 7 
Step 5: Else Go to step 8 
Step 6: Print the triangle is equilateral. 
Step 7: Print the triangle is isosceles. 
Step 8: Print the triangle is scalene. */

#include<stdio.h>
int main() {
	int side1, side2, side3;
	printf("Enter sides of triangle:");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	if(side1 == side2 && side2 == side3)
		printf("The Given Triangle is equilateral\n");
	else if(side1 == side2 ||  side2 == side3 || side3 == side1)
		printf("The Given Triangle is isosceles\n");
	else
		printf("The given Triangle is scalene\n");
		
	 return 0;	
}