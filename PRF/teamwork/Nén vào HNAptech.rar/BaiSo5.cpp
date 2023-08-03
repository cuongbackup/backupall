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
	double a;

	//GET a
	printf("INPUT a: ");
	
	scanf("%lf", &a);
	getc(stdin);

	//ANSWER
	printf("\na ^ 2: %lf\n", pow(a, 2));
	printf("\na ^ 3: %lf\n", pow(a, 3));
	printf("\na ^ 4: %lf", pow(a, 4));

	return 0;
}
