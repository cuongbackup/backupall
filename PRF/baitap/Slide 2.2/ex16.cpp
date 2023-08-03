//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Tinh tong nghich dao cua n so nguyen dau tien

#include <stdio.h>

int main() {
	int n;
	float S = 0;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	for (float i = 1; i <= n; i++)
	S += 1/i;
	printf("Tong nghich dao la: %f", S);
return 0;
}


