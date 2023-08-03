/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will accept the integral part and fraction of a real number then print out the this real number.
*/

#include <stdio.h>

double makeDouble(int ipart, double fraction) {
	double real;
    while (fraction >= 1) fraction = fraction / 10;
    if (ipart < 0) real = ipart - fraction;
    else real = ipart + fraction ;
    return real;
}

int main() {
	int ipart;
	double fraction;
	printf("Input integral part: ");
	scanf("%d", &ipart);
	do {
		printf("Input fraction part: ");
	    scanf("%lf", &fraction);
	} while (fraction < 0);
	printf("The real number made from two part is: %lf", makeDouble(ipart, fraction));
return 0;
}


