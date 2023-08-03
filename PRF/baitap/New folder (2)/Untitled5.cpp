/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

void inputArray(int arr[], int *pn) {
	for (int i = 0; i < *pn; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void selectionSort(int arr[], int *pn) {
	int minIndex;
	int i, j;
	for (i = 0; i < *pn - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < *pn; j++) {
			if (arr[minIndex] > arr[j]) minIndex = j;
		}
		if (minIndex > i) {
			int t = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = t;
		}
	}
}

int binarySearch(int arr[], int *pn, int a) {
	int i = 0, j = *pn - 1, c;
	int result = -1;
	while (i <= j) {
		c = (i + j) / 2;
		if (arr[c] == a) result = c;
		if (arr[c] > a) j = c - 1;
		else i = c + 1;
	}
	return result;
}

int main() {
    int n, a;
	int arr[100];
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	inputArray(arr, &n);
	selectionSort(arr, &n);
	printf("Phan tu can tim: ");
	scanf("%d", &a);
	if (binarySearch(arr, &n, a) == -1) {
	printf("Khong tim thay phan tu do");
    }
	else printf("Phan tu %d ton tai trong mang", a);
    return 0;
}


