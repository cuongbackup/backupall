/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>
#include <stdlib.h>

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

void array() {
	int n, i;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		printf("%d\n", 0 + rand() % (20 - 0));
	}
}

int linearSearch(int arr[], int *pn, int a) {
	int result = -1;
	for (int i = 0; i < *pn; i++) {
		if (arr[i] == a) result = i;
	}
	return result;
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

void menuChoice() {
	printf("--- Chuc nang ---\n");
	printf("1. Tao 1 mang so nguyen ngau nhien co n phan tu co gia tri < 20\n");
	printf("2. Tim kiem phan tu trong mang da nhap\n");
	printf("3. Sap xep mang da nhap\n");
	printf("4. In mang da nhap\n");
	printf("Others. Thoat\n");
}

void menu(int arr[], int *pn) {
	int c, a;
	do {
		printf("Ban chon: ");
		scanf("%d", &c);
		switch (c) {
			case 1: {
				array();
				break;
			}
			case 2: {
				printf("So can tim la: ");
				scanf("%d", &a);
				if (linearSearch(arr, pn, a) == -1) {
					printf("Khong tim thay phan tu da nhap\n");
				} else printf("Phan tu can tim o vi tri %d\n", linearSearch(arr, pn, a));
				break;
			}
			case 3: {
				selectionSort(arr, pn);
				printf("Cac phan tu sau khi sap xep: \n");
				outputArray(arr, pn);
				break;
			}
			case 4: {
				outputArray(arr, pn);
				break;
			}
		}
	} while (c > 0 && c < 5);
}

int main() {
	int arr[100];
	int n;
	inputArray(arr, &n);
	menuChoice();
	menu(arr, &n);
	return 0;
}


