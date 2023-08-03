//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Doing tax

#include <stdio.h>

int main() {
	const long pa = 9000000;
	const long pd = 3600000;
	long tf, n, income, ti;
	double incomeTax;
	printf("Your income this year: ");
	scanf("%ld", &income);
	printf("Number of depenent: ");
	scanf("%ld", &n);
	tf = 12 *(pa + n * pd);
	printf("Tax-free income: %ld\n", tf);
	ti = income - tf;
	if (ti <= 0) 
		printf("Taxable income: 0\n");
	else 
	    printf("Taxable income: %ld\n", ti);
	if (ti <= 0) 
		incomeTax = 0;
	else if (ti <= 5000000)
		incomeTax = ti * 0.05;
	else if (ti <= 10000000)
		incomeTax = ti * 0.1;
	else if (ti <= 18000000)
		incomeTax = ti * 0.15;
	else
		incomeTax = ti * 0.2;
	printf("Income tax: %lf", incomeTax);
return 0;
}


