#include <ctype.h>
#include <stdio.h>

int main()
{
	char ch = 'a';
	if 	(isalnum(ch))
		printf("\nEntered character is alphanumeric\n");
	else
		printf("\nEntered character is not alphanumeric\n");
}
