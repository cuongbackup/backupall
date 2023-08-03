//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/11
//De: Write a program that allows user inputting a simple expression containing one of four operators +, -, *, / 
//then the result is printed out to the monitor

#include <stdio.h>

int main() {
	int luaChon;
	printf("1. Cong\n2. Tru\n3. Nhan\n4. Chia\n");
	scanf("%d", &luaChon);
	switch (luaChon) {
	case 1:
	{
		double a, b;
		printf("\nInput num1, num2:");
		scanf("%lf%lf", &a, &b);
		printf("result: %lf + %lf = %lf", a, b, a + b);
		break;
	}
	case 2:
	{
		double a, b;
		printf("\nInput num1, num2:");
		scanf("%lf%lf", &a, &b);
		printf("result: %lf - %lf = %lf", a, b, a - b);
		break;
	}
	case 3:
	{
		double a, b;
		printf("\nInput num1, num2:");
		scanf("%lf%lf", &a, &b);
		printf("result: %lf * %lf = %lf", a, b, a * b);
		break;
	}
	case 4:
	{
		double a, b;
		printf("\nInput num1, num2:");
		scanf("%lf%lf", &a, &b);
		if (b == 0) {
			printf("Divide by 0");
			break;
		}
		else printf("result: %lf / %lf = %lf", a, b, a / b);
		break;
	}
	default:
		printf("Op is not supported");
	}
}

