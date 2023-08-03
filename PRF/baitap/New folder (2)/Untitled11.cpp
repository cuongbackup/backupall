/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

int checkTriangle(int a, int b, int c) {
	int check;
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0)) {
		check == 1;
	}
	else check == 0;
	return check;
}

int main() {
    int a, b, c;
    printf("Nhap ba so nguyen: ");
    scanf("%d%d%d", &a, &b, &c);
    if (checkTriangle(a, b, c) == 1) printf("%d, %d, %d la ba canh cua tam giac", a, b, c);
    else printf("%d, %d, %d khong phai la ba canh cua tam giac", a, b, c);
    return 0;
}
