/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will accept two positive integers then print out their greatest common divisor and least common multiple.
*/

#include <stdio.h>

int gcd(int a, int b) {
	while (a != b) {
    	if (a > b) a = a - b;
    	else b = b - a;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int a, b;
	do {
	    printf("Input a: ");
        scanf("%d", &a);
        printf("Input b: ");
        scanf("%d", &b);
    } while ((a <= 0) || (b <= 0));
	printf("The greatest common divisor of %d and %d is: %d", a, b, gcd(a, b));
	printf("\nThe least common multiple of %d and %d is: %d", a, b, lcm(a, b));
return 0;
}


