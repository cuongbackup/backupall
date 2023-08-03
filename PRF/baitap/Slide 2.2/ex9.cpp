//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Tinh tong n so nguyen

#include <stdio.h>

int main() {
	int n, a;
	int S = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("Nhap so nguyen thu %d: ", i);
		scanf("%d", &a);
		S = S + a;
	}
	printf("Tong S la: %d", S);
return 0;
}


