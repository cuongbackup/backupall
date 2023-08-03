/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>
#include <stdlib.h>

void sumCal(int n) {
	int sum;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			sum += i;
		}
	}
	printf("Tong cac so le tu 1 den %d = %d\n", n, sum);
}

void checkTriangle(int a, int b, int c) {
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0)) {
		printf("%d, %d, %d la ba canh cua tam giac\n", a, b, c);
	} else printf("%d, %d, %d khong phai la ba canh cua tam giac\n", a, b, c);
}

void sumOfDivisors(int n) {
	double sum = 0;
	for (double i = 1; i <= n; i++) {
		sum += 1/i;
	}
	printf("Sum of divisors = %lf\n", sum);
}


void menuChoice() {
	printf("--- Chuc nang ---\n");
	printf("1. Tinh tong cac so le tu 1 den n\n");
	printf("2. Kiem tra 3 so nguyen co the la canh tam giac hay khong\n");
	printf("3. Tinh tong nghich dao cua n so nguyen dau tien\n");
	printf("Others. Thoat\n");
}

void menu() {
	int c, a;
	do {
		printf("Ban chon: ");
		scanf("%d", &c);
		switch (c) {
			case 1: {
				int n;
				printf("Nhap n: ");
				scanf("%d", &n);
				sumCal(n);
				break;
			}
			case 2: {
				int a, b, c;
				printf("Nhap ba so nguyen: ");
				scanf("%d%d%d", &a, &b, &c);
				checkTriangle(a, b, c);
				break;
			}
			case 3: {
				int n;
				printf("Nhap n: ");
				scanf("%d", &n);
				sumOfDivisors(n);
				break;
			}
		}
	} while (c > 0 && c < 4);
}

int main() {
	int n, a, b, c;
	menuChoice();
	menu();
	return 0;
}


