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

int linearSearch(int arr[], int *pn, int a) {
	int result = -1;
	for (int i = 0; i < *pn; i++) {
		if (arr[i] == a) result = i;
	}
	return result;
}


int main() {
	int arr[100]; 
	int n, a;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	inputArray(arr, &n);
	printf("Phan tu can tim: ");
	scanf("%d", &a);
	if (linearSearch(arr, &n, a) == -1) {
	printf("Khong tim thay phan tu do");
    }
	else printf("Phan tu can tim o vi tri %d", linearSearch(arr, &n, a));
    return 0;
}



