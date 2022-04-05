// 10th Table using Do While

#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i = 1;
	printf("Enter the Number: ");
	scanf("%d",&num);
	printf("multiplication table of %d ",num);
	do{
		printf("\n %d * %d = %d",num,i,num*i);
		i++;
			}
	while(i<=10);
	getch();
		
}