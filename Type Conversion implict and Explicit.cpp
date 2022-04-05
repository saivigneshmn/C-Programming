#include<stdio.h>
int main() {
	
	int x1=10;
	char y = 'c';
	
	// value of 'c' is 99
	x1 = x1 + y; //y implicitly converted to int. ASCII
	printf("x1 = %d\n", x1);
	
	float x = 1.2;
	printf("\nAt first float value of x = %f\n",x) ;
	
	int in = (int)x; // Explicit conversion from float to int
	printf("After converting float(x) to int(in) = %d \n" ,in);
	
	float sum = (float)in+1; // Explicit conversion from int to float
	printf ("sum = %f",sum);
	
	return 0;
	
}
