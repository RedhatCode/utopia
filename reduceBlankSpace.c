#include<stdio.h>

/* program to reduce input strings unnecessary blank spaces */

main()
{
	int c, pre;
	while((c = getchar()) != EOF)
	{
		if (( pre == ' ') && ( c == ' '))
			continue;
		else
		{
			pre = c;
			putchar(c);
		}
	}
}
