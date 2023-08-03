#include <stdio.h>
/*
 * The for loop is used to initialize the variable i to 1.
 * Repeat the code inside the loop as long as i is less than or equal to 100.
 * Increment i by 1 after each iteration.
 * The printf function is used to print the value of i on each iteration.
 */

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }

    return 0;
}
