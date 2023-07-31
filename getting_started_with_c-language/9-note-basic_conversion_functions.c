#include <ctype.h>
#include <stdio.h>

int a;
int c = 'A';

/* Converts c to a lower-case letter (a-z).
 * If conversion is not possible the unchanged value is returned.
 * Returns 'a' here.
 */

a = tolower (c);


/* Converts c to an upper-case letter (A-Z).
 * If conversion is not possible the unchanged value is returned.
 * Reurns 'A' here.
 */

a = toupper (c);
