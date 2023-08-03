int numbers[] = {1, 2, 3, 4, 5};
int *ptr = numbers;

// Accessing array elements using pointer arithmetic
printf("%d\n", *ptr);	// Output: 1
printf("%d\n", *(ptr+1));	//Output: 2
printf("%d\n", *(ptr+2));	// Output: 3
