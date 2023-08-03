//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Tim cac uoc so cua n

#include <stdio.h>

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("Uoc so cua n la: ");
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
		printf("%d ", i);
	}
return 0;
}


