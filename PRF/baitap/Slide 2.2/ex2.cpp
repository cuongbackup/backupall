//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Tim so lon nhat cua 3 so nguyen dai

#include <stdio.h>

int main() {
	long a, b, c;
	printf("Nhap so a: ");
    scanf("%ld", &a);
    printf("Nhap so b: ");
    scanf("%ld", &b);
    printf("Nhap so c: ");
    scanf("%ld", &c);
    if (b > a)
    a = b;
    if (c > a)
    a = c;
    printf("So lon nhat la: %ld", a);
return 0;
}


