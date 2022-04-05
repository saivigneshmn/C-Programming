/* Algorithm for factorial of a number

step 1: Ask the user to enter an integer to find the factorial
step 2: Read the integer and assign it to a variable
step 3: From the value of the integer up to 1, multiply each digit and update the final value
step 4: The final value at the end of all the multiplication till 1 is the factorial
step 5: End program */

#include<stdio.h>
int main(){

    int x,fact=1,n;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n); 

    for(x=1;x<=n;x++)
        fact=fact*x; 
    printf("Factorial of %d is: %d",n,fact);

    return 0;

}