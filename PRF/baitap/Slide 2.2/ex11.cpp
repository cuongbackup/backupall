//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Kiem tra mat khau

#include <stdio.h>

int main() {
	long password1, password2;
	printf("Nhap password: ");
	scanf("%ld", &password1);
	printf("Nhap lai password: ");
	scanf("%ld", &password2);
	if (password1 == password2)
	printf("Mat khau chinh xac");
	else
	printf("Mat khau sai");
return 0;
}
