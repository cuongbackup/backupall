/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

void drawRec(int cd, int cr) {
	for (int i = 1; i <= cr; i++) {
		for (int j = 1; j <= cd; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int cd, cr;
	printf("Nhap chieu dai: ");
	scanf("%d", &cd);
	printf("Nhap chieu rong: ");
	scanf("%d", &cr);
    drawRec(cd, cr);
    return 0;
}


