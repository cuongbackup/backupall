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
	double r;

	//GET R
	printf("INPUT R: ");
	
	scanf("%lf", &r);
	getc(stdin);

	//ANSWER
	printf("\nS: %lf\n", 4 * M_PI * pow(r, 2));
	printf("\nV: %lf", (4 / (double)3) * M_PI * pow(r, 3));

	return 0;
}
