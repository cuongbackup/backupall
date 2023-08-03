/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/06
*/

#include <stdio.h>
#include <stdlib.h>

void array(int arr[], int n, int a, int b) {
	int ran;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		ran = (a - 1) + rand() % ((b + 1) - (a - 1));
		printf("%d\n", ran);
		sum += ran;
	}
	printf("Sum = %d", sum);
}

int main() {
	int n, a, b, arr[100];
	printf("Nhap so phan tu thuoc doan a, b: ");
	scanf("%d", &n);
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	array(arr, n, a, b);
    return 0;
}


