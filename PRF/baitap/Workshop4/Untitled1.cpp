/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/21
*/

#include <stdio.h>
#include <math.h>

int prime(int n) {
	int result = 1;
	float m = sqrt(n);
	for (int i = 2; i <= m; i++) {
		if (n % i == 0) result = 0;
	}
	return result;
}

void printMinMaxDigits(int n) {
	int digit;
	int min = 9;
	int max = 0;
	while (n > 0) {
		digit = n % 10;
		if(digit > max) max = digit;
		if(digit < min) min = digit;
		n = n / 10;
	}
	printf("Min digit is: %d\n", min);
	printf("Max digit is: %d\n", max);
}

int main() {
	int c, n;
	do {
		printf("1 - Process primes\n");
		printf("2 - Print min, max digit in an integer\n");
		printf("3 - Quit\n");
		printf("Select an operation: ");
		scanf("%d", &c);
		switch(c) {
			case 1:
				{
					do {
						printf("Input n: ");
						scanf("%d", &n);
					} while (n < 0);
					if (prime(n) == 1) printf("%d is a prime\n", n);
					else printf("%d is not a prime\n", n);
					break;
				}
			case 2:
				{
					do {
						printf("Input n: ");
						scanf("%d", &n);
					} while (n < 0);
					printMinMaxDigits(n);
					break;
				}
		} 
    } while ((c > 0) && (c < 3));
	return 0;
}


