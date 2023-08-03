//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/09
//De: tinh tich tu 1 den 10

#include <stdio.h>

int main() {
	int S = 0;
	int i = 1;
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	while (i <= n ) {
		S += i;
		i++;
	}
	printf("Tong tu 1 den %d la: %d", n, S);
return 0;
}


