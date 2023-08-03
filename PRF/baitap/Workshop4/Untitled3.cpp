/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/21
*/

#include <stdio.h>

int continuousSum(int n) {
	int S = 0;
	do {
		printf("Input n: ");
		scanf("%d", &n);
		S = S + n;
	} while (n != 0);
	return S;
}

void continuousSwap(int x, int y) {
	do {
	printf("Input x: ");
	scanf("%d", &x);
	printf("Input y: ");
	scanf("%d", &y);
	int c = x;
	x = y;
	y = c;
	printf("New x: %d\n", x);
	printf("New y: %d\n", y);
    } while (x != 0 && y != 0);
}

int main() {
	int c, n, x, y;
	do {
		printf("1 - Continuous sum, stop when n = 0\n");
		printf("2 - Continuous swap, stop when x = 0 and y = 0\n");
		printf("3 - Quit\n");
		printf("Select an operation: ");
		scanf("%d", &c);
		switch(c) {
			case 1: {
				printf("Sum of inputted numbers is: %d\n", continuousSum(n));
				break;
			}
			case 2: {
				continuousSwap(x, y);
				break;
			}
		}
	} while ((c > 0) && (c < 3));
	return 0;
}


