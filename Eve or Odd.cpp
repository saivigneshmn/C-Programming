#include<stdio.h>
//EVEN = 1, ODD = 0
int main() {
int x;
printf("Enter the Number: ");
scanf("%d",&x);
printf("%d", x % 2 == 0);
return 0;
}