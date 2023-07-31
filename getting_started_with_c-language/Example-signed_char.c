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

/*The signed char data type allows us to work with both positive and negative values within the range of -128 to 127.
It is particularly useful when dealing with situations where negative values need to be represented, 
such as in  mathematical calculations or when working with signed characters in strings*/
/*In summary, the signed char data type provides a flexible and efficient way to handle signed values within the c language*/
