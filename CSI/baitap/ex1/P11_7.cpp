/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>
#include <stdlib.h>

void inputArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void selectionSort(int arr[], int n) {
	int minIndex;
	int i, j;
	for (i = 0; i < n - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < n; j++) {
			if (arr[minIndex] > arr[j]) minIndex = j;
		}
		if (minIndex > i) {
			int t = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = t;
		}
	}
}

int search(int arr[], int n, int del) {
	int p = -1;
	for (int i = 0; i < n; i++) {
		if (del == arr[i]) p = i;
	}
	return p;
}

void output(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		printf("%d ", arr[i]);
	}
}

void delValue(int arr[], int n) {
	int del;
	printf("Nhap phan tu can xoa khoi mang: ");
	scanf("%d", &del);
	int loc = search(arr, n, del);
	if (loc == -1) printf("Khong xoa duoc phan tu vi phan tu khong ton tai");
	else {
		for (int i = loc; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		printf("Mang sau khi xoa phan tu: ");
		output(arr, n);
	}
}

int main() {
	int n, a;
	int arr[100];
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	inputArray(arr, n);
	selectionSort(arr, n);
	delValue(arr, n);
	return 0;
}

