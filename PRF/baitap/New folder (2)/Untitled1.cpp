/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/06
*/

#include <stdio.h>

void inputArray(int arr[], int *pn) {
	for (int i = 0; i < *pn; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int main() {
	int arr[100];
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	inputArray(arr, &n);
    return 0;
}


