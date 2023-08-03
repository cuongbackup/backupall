/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/21
*/

#include <stdio.h>

void printFibo(int n) {
	int a = 1, b = 1, f = 1;
	if (n == 1) printf("1");
	else if (n == 2) printf("1 1");
	else {
		printf("1 1 ");
		for (int i = 3; i <= n; i++) {
			f = a + b;
			a = b;
			b = f;
			printf("%d ", f);
		}
	}
}

int validDate (int d, int m, int y) {
	int maxd = 31;
	if (d < 1 || d > 31 || m < 1 || m > 12) maxd = 0;
	if (m == 4 || m == 6 || m == 9 || m == 11) maxd = 30;
	else if (m == 2) {
		if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) maxd = 29;
		else maxd = 28;
	}
	return maxd;
}


int main() {
	int c, n, d, m, y;
	do {
		printf("1 - Fibonacci sequence\n");
		printf("2 - Check a date\n");
		printf("3 - Quit\n");
		printf("Select an operation: ");
		scanf("%d", &c);
		switch(c) {
			case 1: {
				do {
					printf("Input n: ");
					scanf("%d", &n);
				} while (n < 1);
				printFibo(n);
				printf("\n");
				break;
			}
			case 2: {
				int d, m, y;
				printf("Input date: ");
				scanf("%d", &d);
				printf("Input month: ");
				scanf("%d", &m);
				printf("Input year: ");
				scanf("%d", &y);
				if (validDate(d, m, y) >= d) printf("Valid date\n");
				else printf("Invalid date\n");
				break;
			}
		}
	} while ((c > 0) && (c < 3));
	return 0;
}



