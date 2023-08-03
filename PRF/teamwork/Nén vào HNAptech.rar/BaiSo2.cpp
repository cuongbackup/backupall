#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
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
	int dec;

	//GET A DECIMAL VALUE
	printf("ENTER A DECIMAL NUMBER: ");

	scanf("%d", &dec);

	//GET WHITE SPACE
	getc(stdin);

	//ANSWER
	printf("\nHEXA DECIMAL NUMBER: %X", dec);

	return 0;
}
