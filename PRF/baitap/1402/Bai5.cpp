/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will print out the value at the nth position in Fibonacci sequence.
*/

#include <stdio.h>

long fibo (int n) {
   int t1 = 1;
   int t2 = 1;
   int f = 1;
   int i;
   for (int i = 3; i <= n; i++) {
      f = t1 + t2;
      t1 = t2;
      t2 = f;
   }
   return f;
} 

int main() {
	int n;
	do {
		printf("Input nth position: ");
		scanf("%d", &n);
	} while (n < 1);
    printf("The value at the position number %d in Fibonacci sequence: %ld", n, fibo(n));
return 0;
}


