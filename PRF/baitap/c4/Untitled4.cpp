/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/23
De:
*/

#include <stdio.h>

int main() {
	double d = 7.45;
	double *pd = &d;
	double *pa = pd;
	*pd = 11.5;
	printf("%lf\n", *pd);
	printf("%lf", *pa);
return 0;
}


