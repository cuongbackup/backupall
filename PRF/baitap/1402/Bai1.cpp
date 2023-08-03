/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C that will accept a positive integer n, n>=2 then print out primes between 2 and n.
*/

#include <stdio.h>
#include <math.h>

int prime(int n) {
    int m = sqrt(n);
    int result = 1;
    for (int i = 2; i <= m; i++)
	    if (n % i == 0) result = 0;
    return result;	
}

int main() {
	int n;
	while (n < 2) {
	printf("Input n: ");
	scanf("%d", &n);
    }
	printf("Primes between 2 and %d: ", n);
	for (int j = 2; j <= n; j++)
	if (prime(j) == 1)
	    printf("%d ", j);
return 0;
}


