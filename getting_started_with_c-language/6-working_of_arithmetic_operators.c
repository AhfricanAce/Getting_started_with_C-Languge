#include <stdio.h>

/* Working of arithmetic operators*/

int main()
{
	int a = 9, b = 4, c;

	c = a+b;
	printf("a+b = %d \n",c);
	c = a-b;
	printf("a-b = %d \n",c);
	c = a*b;
	printf("a*b = %d \n",c);
	c = a/b;
	printf("a/b = %d \n",c);
	c = a%b;
	printf("%d is the remainader of a divided by b where a=9 and b=4 \n",c);
	
	return 0;
}
