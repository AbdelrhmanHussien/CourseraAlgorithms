#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define UpperLimit 200000
#define LowerLimit 2

long long getmax (long long [], int );
long long getmax2 (long long [], int , long long );

void main (int argc, char **argv)
{
	if (argc != 2)
	{
		printf ("Invalid number of arguments \n");
		return;
	}
	else
	{
		/* do nothing */
	}
	
	short IsDigit = isdigit(*argv[1]);
	if (!IsDigit)
	{
		printf ("The argument is not a digit \n");
		return;
	}
	else
	{
		/* do nothing */
	}
	
	int ElemNumber = atoi (argv[1]);
	if(ElemNumber < LowerLimit || ElemNumber > UpperLimit)
	{
		printf ("The Number of elements is not in the range \n");
		return;
	}
	else
	{
		/* do nothing */
	}
	
	short i;
	int64_t Elements[ElemNumber];
	
	for (i=0;i<ElemNumber;i++)
	{
		scanf("%ld",&Elements[i]);
		if(Elements[i]<0)
		{
			printf("The Element Number %d is less than 0",i);
			return;
		}
		else
		{
			/* do nothing */
		}
	}
	
	long long Max1 = getmax(Elements,ElemNumber);
	long long Max2 = getmax2(Elements,ElemNumber,Max1);
	printf("%ld\n ", Max1*Max2);
	return;
}


long long getmax (long long arr[], int ArrSize)
{
	int i;
	long long TempMax=0;
	
	for (i=1;i<ArrSize;i++)
	{
		if(TempMax <= arr[i])
		{
			TempMax = arr[i];
		}
		else
		{
			/* do nothing */
		}
	}
	return TempMax;
}

long long getmax2 (long long arr[], int ArrSize, long long FirstMax)
{
	int i;
	long long TempMax=0];
	for (i=1;i<ArrSize;i++)
	{
		if((TempMax <= arr[i]) && (arr[i] != FirstMax))
		{
			TempMax = arr[i];
		}
		else
		{
			/* do nothing */
		}
	}
	return TempMax;
}