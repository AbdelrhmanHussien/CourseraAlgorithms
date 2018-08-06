#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main (int argc, char **argv)
{
	if (argc != 3)
	{
		printf ("invalid number of arguments\n");
		return;
	}
	else
	{
		unsigned int Num1 = atoi (argv[1]);
		unsigned int Num2 = atoi (argv[2]);
		
		unsigned short b1 = isdigit(*argv[1]);
		unsigned short b2 = isdigit(*argv[2]);

		if (( (b1 != 0 ) && (Num1 >=0 && Num1 <=9)) && ((b2 != 0) && (Num2 >=0 && Num2 <=9)))
		{
			printf ("%d\n",Num1+Num2);
			return;
		}
		else
		{
			printf ("invalid numbers\n");
			return;
		}
	}
}
