//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Tinh UCLN, BCNN

#include <stdio.h>

int main() {
	int a, b, c, d, bcln;
	printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    c = a;
    d = b;
    while (a != b) {
    	if (a > b)
    	a = a - b;
    	else
    	b = b - a;
	}
	printf("Uoc chung lon nhat la: %d", a);
	printf("\nBoi chung nho nhat la: %d", (c * d) / b);
return 0;
}


