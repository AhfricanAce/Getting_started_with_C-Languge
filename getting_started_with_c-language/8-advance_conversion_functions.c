#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* One common example of a conversion function in C is the atoi() function, which is used to convert a string 
 to an integer. This function takes a string as input and returns the corresponding integer value. 
 See example below
 */

int main() {
	char str[] = "123";
	int num = atoi(str);
	printf("The converted string is: %d\n" num);
	return 0;
}
