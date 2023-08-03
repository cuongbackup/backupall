//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Hoan doi gia tri neu can de luon bao dam a > b

#include <stdio.h>

int main() {
	int a, b, c;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    if (a < b)
    {
    	c = a;
    	a = b;
    	b = c;
	}
    printf("a la: %d\nb la: %d", a, b);
return 0;
}


