/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/14
De: Write a C program that will accept a non-negative integer then print out its minimum and maximum digits.
*/

#include <stdio.h>

void printMinMaxDigits (int n) {
   int digit, min, max;
   min = 9;
   max = 0;
   while (n > 0) {
       digit = n % 10;
       n = n / 10;
       if (min > digit) min = digit; 
       if (max < digit) max = digit;
   }
   printf("Minimum digit: %d\n", min);
   printf("Maximum digit: %d", max);
}

int main() {
     int n;
     do {
           printf("Input n: ");
           scanf("%d", &n);
           printMinMaxDigits(n);
     } while (n < 0);
return 0;
}

