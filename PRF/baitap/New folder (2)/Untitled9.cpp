/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

void sumCal(int n) {
	int sum;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			sum += i;	
		}
	}
	printf("Tong cac so le tu 1 den %d = %d", n, sum);
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	sumCal(n);
    return 0;
}


