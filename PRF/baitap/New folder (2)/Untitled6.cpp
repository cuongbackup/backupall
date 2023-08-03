/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

void inputArray(int arr[], int *pn) {
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	*pn = n;
	for (int i = 0; i < *pn; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void outputArray(int arr[], int *pn) {
	for (int i = 0; i < *pn; i++) {
		printf("a[%d] = %d\n", i, arr[i]);
	}
}

int main() {
	int arr[100];
	int n;
	inputArray(arr, &n);
	outputArray(arr, &n);
    return 0;
}


