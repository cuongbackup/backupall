/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will accept a positive integer then print out its factorial.
*/

#include <stdio.h>

long factorial(int n) {
	long p = 1;
	for (int i = 1; i <= n; i++) p *= i;
	return p;
}

int main() {
	int n;
	do {
		printf("Input n: ");
		scanf("%d", &n);
	} while (n < 1);
	printf("Factorial of %d: %ld", n, factorial(n));	
return 0;
}


