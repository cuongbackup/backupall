//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Xep loai hoc luc dua vao diem

#include <stdio.h>

int main() {
	int a;
    printf("Nhap diem: ");
    scanf("%d", &a);
    if (a >= 9)
    printf("Xuat sac");
    if (a >= 8 && a < 9)
    printf("Gioi");
    if (a >= 7 && a < 8)
    printf("Kha");
    if (a >= 6 && a < 7)
    printf("TBKha");
    if (a >= 5 && a < 6)
    printf("TBinh");
    if (a < 5)
    printf("Yeu");
return 0;
}



