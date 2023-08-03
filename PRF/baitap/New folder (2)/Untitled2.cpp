/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/06
*/

#include <stdio.h>
#include <stdlib.h>

void array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		printf("%d\n", 0 + rand() % (20 - 0));
	}
}

int main() {
	int n, arr[100];
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	array(arr, n);
    return 0;
}


