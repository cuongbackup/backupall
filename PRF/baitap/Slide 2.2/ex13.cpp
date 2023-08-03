//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Ve hinh chu nhat co chieu rong la 10 hang, hang thu nhat la 10 so 0, hang thu hai la 10 so 1

#include <stdio.h>

int main() {
	int a;
	printf("Nhap chieu dai: ");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= 10; j++) {
		printf("%d", i - 1);
	    }
		printf("\n");
	}
return 0;
}


