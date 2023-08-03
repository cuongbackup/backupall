//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Nhap 1 so nguyen tu ban phim den khi gap 0 thi ngung. In ra tong cac so nguyen duong

#include <stdio.h>

int main() {
	int a;
	int S = 0;
    do {
    	printf("Nhap a: ");
    	scanf("%d", &a);
    	if (a > 0)
    	S += a;
	} while (a != 0);
	printf ("S = %d", S);
return 0;
}


