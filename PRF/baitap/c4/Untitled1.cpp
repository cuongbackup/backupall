/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/21
De:
*/

#include <stdio.h>

int main() {
	int n = 7, m = 8;
    int *p1 = &n;
	int *p2 = &m;
    *p1 += 12 - m + (*p2);
    *p2 = m + n - 2 * (*p1);
    printf("%d", m + n);
return 0;
}


