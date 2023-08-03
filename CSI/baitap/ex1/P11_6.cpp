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

int search(int arr[], int n, int add) {
	int p;
	for(int i = 0; i < n; i++) {
		if(add < arr[i]) {
			p = i;
			break;
		} else {
			p = i + 1;
		}
		return p;
	}
}

void addValue(int arr[], int n) {
	int add;
	printf("Nhap phan tu can nhap vao mang: ");
	scanf("%d", &add);
	int loc = search(arr, n, add);
	for (int i = n; i > loc; i--) {
		arr[i] = arr[i - 1];
	}
	arr[loc] = add;
	n++;
}

void output(int arr[], int n) {
	n++;
	for (int i = 0; i <= n; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int n, a;
	int *arr;
	arr = (int*)calloc (100, sizeof(int));
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	inputArray(arr, n);
	selectionSort(arr, n);
	addValue(arr, n);
	printf("Mang sau khi them phan tu: ");
	output(arr, n);
	return 0;
}

