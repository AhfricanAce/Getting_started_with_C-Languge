#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

int main()
{
	signed char num1 = 10;
	signed char num2 = -5;
	signed char sum = num1 + num2;

	printf("The sum of %d and %d is %d\n", num1, num2, sum);
	return 0;
}
/* In this example, we declare two signed char variables num1 and num2, and initialize them with the 
values 10 and -5 respectively.*/
/*We then perform addition using the + operator and store the result in the sum variable.*/
/*Finally, we print the result using the printf function.*/
