/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>
#include <stdlib.h>

void arrayInput(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void arrayOutput(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void menuChoice() {
	int a[100], n, c;
	printf("--- Choose a function ---\n");
	printf("1. Input array\n");
	printf("2. Output array\n");
	do {
		scanf("%d", &c);
		switch(c) {
			case 1: {
				arrayInput(a, n);
				break;
			}
			case 2: {
				arrayOutput(a, n);
				break;
			}
		}
	} while ((c >= 1) && (c <= 2));
}

int main() {
	int a[100], n, c;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
    menuChoice();
	return 0;
}


