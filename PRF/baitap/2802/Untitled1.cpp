/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/28
De:
*/

#include <stdio.h>

int binarySearch(int a[6]) {
	int i = 0, j = 5, c;
	int result = -1;
	while (i <= j) {
		c = (i + j) / 2;
		if (a[c] == 5) result = c;
		if (a[c] > 5) j = c - 1;
		else i = c + 1;
	}
	return result;
}

int main() {
	int a[6];
	for (int i = 0; i < 6; i++) {
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("%d", binarySearch(a));
    return 0;
}


