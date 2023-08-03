/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will accept a point and a circle having the center is (0,0) 
then print out the relative position of this point with the circle.
*/

#include <stdio.h>

int getRelPos (double r, double x, double y) {
	double d2 = x * x + y * y;
	double r2 = r * r;
	int result;
	if (d2 < r2) result = 1;
	else if (d2 == r2) result = 0;
	else result = -1;
	return result;
}

int main() {
	double r, x, y;
	printf("Input x, y: ");
	scanf("%lf%lf", &x, &y);
	do {
		printf("Input r: ");
		scanf("%lf", &r);
	} while (r < 0);
	if (getRelPos(r, x, y) == 1) printf("The point is in the circle");
	else if (getRelPos(r, x, y) == 0) printf("The point is on the circle");
	else printf("The point is out of the circle");
return 0;
}


