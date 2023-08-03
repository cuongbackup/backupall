//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Write a C program that will accept two characters then print out ASCII code difference between them and characters between them 
//including code values in decimal, octal, hexadecimal expansions in ascending order.

#include <stdio.h>

int main() {
	int c1, c2;
	printf("Input c1, c2: ");
	scanf("%d%d", &c1, &c2);
	if (c1 > c2) {
		char t = c1;
		c1 = c2;
		c2 = t;
	}
	printf("d: %d\n", c2 - c1);
	for (char c = c1; c <= c2; ++c) {
		fprintf(stdout, "%c: %d, %o, %X\n", c, c, c, c);
	}
return 0;
}


