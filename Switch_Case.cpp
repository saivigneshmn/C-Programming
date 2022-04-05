/* Algorithm for simple calculator using switch case
Step 1: Print Enter your choice
step 2: Enter Your Choice
step 3: User will enter +,-,*,/
step 4: Enter the two operands for operation
step 5: Switch Operator
step 6: Do the Operation
step 7: Print the Result and Exit */

#include <stdio.h>
int main() {
	char operation;
	float a,b;
	
	printf("Enter an Operator (+,-,*,/) = ");
	scanf("%c",&operation);
	printf("Enter the TWO OPERANDS: ");
	scanf("%f %f",&a,&b);
	
	switch(operation)
	{
		case '+':
			printf("%.1f + %.1f = %.1f",a,b, a+b);
			break;
			
		case '-':
			printf("%.1f - %.1f = %.1f",a,b, a-b);
			break;
			
		case '*':
			printf("%.1f * %.1f = %.1f",a,b, a*b);
			break;
			
		case '/':
			printf("%.1f / %.1f = %.1f",a,b, a/b);
			break;
			
		default:
			printf("Wrong Operator!");
	}
	
	return 0;
}