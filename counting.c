#include<stdio.h>

/* Exercise program to count blanks, tabs and newlines */

main()
{
	long nc;
	int c;
	long blanks = 0, tabs = 0, newlines = 0;
	for(c = 0; (c=getchar()) != EOF; ++c)
	{
		if(c == ' ')	++blanks;
		if(c == '\t')	++tabs;
		if(c == '\n')	++newlines;
	}
	printf("\n\nNumbers of blanks detected: %ld", blanks);
	printf("\nNumbers of tabs detected: %ld", tabs);
	printf("\nNumbers of newlines detected: %ld\n", newlines);
}
