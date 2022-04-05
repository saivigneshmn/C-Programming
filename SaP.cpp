/*#include<stdio.h>
#include<conio.h>
main()

{
	static char k;
	while (k<=10)
	k>0?k++:k--;
	if(printf("%d\n",k))
	printf("Hi Chennai");
	getch();
}

*/

#include<stdio.h>
#include<conio.h>
main()
{
	char i=250;
	for (i<0;i++;i=0,printf("%d",i));
	getch();
}