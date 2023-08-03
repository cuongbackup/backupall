//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Write a C program that will print out sum of integers inputted from the keyboard until  the value 0 is inputted

#include <stdio.h>

int main() {
	int x;
	int S = 0;
    do {
    	printf("Input x: ");
    	scanf("%d", &x);
    	if (x != 0)
    	S += x;
	} while (x != 0);
	printf ("S = %d", S);
return 0;
}


