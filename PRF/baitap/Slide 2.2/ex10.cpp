//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Tinh tong cac gia tri le tu 0 toi n

#include <stdio.h>

int main() {
	int n;
	int S = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1)
		S = S + i;
	}
	printf("Tong S la: %d", S);
return 0;
}


