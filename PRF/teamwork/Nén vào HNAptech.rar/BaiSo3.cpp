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
	int a, b;

	//GET a AND b
	printf("INPUT a: ");
	scanf("%d", &a);

	//GET WHITE SPACE
	getc(stdin);

	printf("INPUT b: ");
	scanf("%d", &b);

	//GET WHITE SPACE
	getc(stdin);

	//ANSWER
	printf("\na + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d", a / b);

	return 0;
}

//NHAN XET: PHEP '/' LA PHEP CHIA NGUYEN NEN CHI LAY PHAN NGUYEN KET QUA CO ÐUOC SAU KHI CHIA
