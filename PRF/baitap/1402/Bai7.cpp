/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will carry out some times. 
In each time, a nonnegative integer is accepted then print out the sum of its decimal digits. 
The program will terminate when its value of accepted number is negative.
*/

#include <stdio.h>

int sumDigits (int n) {
   int sum = 0;
   do {
       int remainder = n % 10; 
       n = n / 10;
       sum += remainder;
   } while (n > 0);
   return sum;
}

int main() {
	int n;
	do {  
	   printf("Input n: ");
	   scanf("%d", &n);
       if (n >= 0) printf("Sum of decimal digits: %d\n", sumDigits(n));
    } while (n>=0);
return 0;
}


