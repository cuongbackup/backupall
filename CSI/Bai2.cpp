/* Name: Tran Nguyen Quoc Cuong
   Date: 2022/01/19
*/

#include <stdio.h>
int main() {
	int a, b;
	printf("Nhap hai so nguyen: \n");
	scanf("%d%d", &a, &b);
	printf("Tong hai so nguyen la: %d\n", a + b);
	printf("Hieu hai so nguyen la: %d\n", a - b);
	printf("Tich hai so nguyen la: %d\n", a * b);
	printf("Thuong hai so nguyen la: %f", (double)a / b);
	return 0;
}
