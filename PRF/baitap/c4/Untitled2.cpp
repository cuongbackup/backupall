/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/21
De:
*/

#include <stdio.h>

int main() {
	int n=7, m=8;
    int *p1 = &n, *p2 = &m;
    *p1 += 5 + 3 * (*p2) - n;
    *p2 = 5 * (*p1) - 4 * m + 2 * n;
    printf("%d", n);
    printf("%d", m);
return 0;
}
