#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

typedef long long ll;
typedef unsigned long long ull;

#define MAX_N 1000000	

int main()
{
	int second;

	do
	{
		//INPUT SECOND
		printf("INPUT SECOND: ");

		scanf("%d", &second);
		getc(stdin);

		if (second < 0 && second > 86399)
		{
			puts("\nINPUT AGAIN\n");
		}
	} while (second < 0 && second > 86399);

	int hour = second / 3600;
	int minute = second % 3600 / 60;
	int sec = second % 3600 % 60;

	if (hour < 10)
	{
		printf("0%d:", hour);
	}
	else
	{
		printf("%d:", hour);
	}

	if (minute < 10)
	{
		printf("0%d:", minute);
	}
	else
	{
		printf("%d:", minute);
	}

	if (sec < 10)
	{
		printf("0%d", sec);
	}
	else
	{
		printf("%d", sec);
	}

	return 0;
}
