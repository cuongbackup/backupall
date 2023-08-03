/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/25
De:
*/

#include <stdio.h>

int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}


