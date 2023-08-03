//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: So sanh 2 so thuc nhap vao

#include <stdio.h>

int main() {
	float a, b;
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
    if (a > b)
    printf("%f lon hon %f", a, b);
    else if (a < b)
    printf("%f nho hon %f", a, b);
    else
    printf("%f bang %f", a, b);
return 0;
}


