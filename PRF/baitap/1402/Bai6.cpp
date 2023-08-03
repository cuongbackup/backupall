/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will accept a positive integer then print out whether it is an element of the Fibonacci sequence or not.
*/

#include <stdio.h>

int fibo (int n) {
   int t1=1; 
   int t2=1; 
   int f=1;
   if (n==1) return 1;
   while (f<n) {
       f = t1 + t2;
       t1 = t2;
       t2 = f;
   }  
   return n == f;
}

int main() {
	int n;
	do {
		printf("Input n: ");
		scanf("%d", &n);
	} while (n < 1);
	if (fibo(n) == 1) printf("%d is a Fibonacci element", n);
	else printf("%d is not a Fibonacci element", n);
return 0;
}


