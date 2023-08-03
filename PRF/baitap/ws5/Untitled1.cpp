/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/03/02
*/

#include <stdio.h>

int isbn[10];

void arrayConvert(int input) {
	for (int i = 9; i > 0; i--) {
		isbn[i] = input % 10;
		input /= 10;
	}
}

void checkCanadianSIN() {
	int sum = 0;
	int counter = 10;
	for (int i = 0; i < 9; i++) {
		sum += isbn[i] * counter;
		counter--;
	}
	sum += isbn[9];
	if (sum % 11 == 0) {
		printf("This is a valid ISBN\n");
	}
	else {
		printf("This is not a valid ISBN\n");
	}
}

int main() {
	int input;
	printf("ISBN Validator ==============\n");
	printf("\nISBN (0 to quit): ");
	scanf("%d", &input);
	if (input == 0) {
		printf("\nHave a Nice Day!");
	}
	else {
		arrayConvert(input);
		checkCanadianSIN();
	}
	return 0;
	}





