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

void outputArray(int arr[], int *pn) {
	for (int i = 0; i < *pn; i++) {
		printf("a[%d] = %d\n", i, arr[i]);
	}
}

int main() {
	int n;
	int arr[100];
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	inputArray(arr, &n);
	selectionSort(arr, &n);
	printf("Cac phan tu sau khi sap xep: \n");
	outputArray(arr, &n);
	return 0;
}


