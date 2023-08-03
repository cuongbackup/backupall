//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Write a C program that will carry out some times: accept two integers, swap these values, print them out to the monitor. 
//The program will terminate when the value of 0 is inputted.

#include <stdio.h>

int main() {
	int x, y;
	do {
	printf("Input x, y: ");
	scanf("%d%d", &x, &y);
	int c = x;
	x = y;
	y = c;
	printf("x: %d\n", x);
	printf("y: %d\n", y);
    } while (x != 0 && y != 0);
return 0;
}


