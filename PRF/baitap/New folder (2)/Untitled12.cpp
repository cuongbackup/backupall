/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

void sumOfDivisors(int n) {
	double sum = 0;
	for (double i = 1; i <= n; i++) {
		sum += 1/i;
	}
	printf("Sum of divisors = %lf", sum);
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	sumOfDivisors(n);
    return 0;
}


