//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Ve hinh chu nhat bang dau "*"

#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap chieu dai: ");
	scanf("%d", &a);
	printf("Nhap chieu rong: ");
	scanf("%d", &b);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
		printf("*");
	    }
		printf("\n");
	}
return 0;
}


