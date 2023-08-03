//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Write a C program that will print out the ASCII code table.

#include <stdio.h>

int main() {
	for (int code = 0; code <= 255; ++code) {
		printf("%c: %d, %o, %X\n", code, code, code, code);
		if(code != 0 && code % 20 == 0)
			getchar();
}
return 0;
}


