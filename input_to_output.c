#include<stdio.h>

/* A program to change the
	input to corresponding output */

main()
{
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
	printf("Intergeter valuer of EOF is: %d", EOF);
}
