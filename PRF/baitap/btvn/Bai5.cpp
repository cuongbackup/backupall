//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Write a C program that will:
//-	permit user inputting a string of characters. The input operation will terminate if the ENTER key is stroked. 
//-	print out the number of vowels, number of consonants, and number of others to the monitor.


#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
	int nVowels = 0;
	int nConsonants = 0;
	int nOthers = 0;
	printf("Input char: \n");
	do {
        ch = getchar();
        ch = toupper(ch);
		if (ch >= 'A' && ch <= 'Z') {
			switch (ch) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			{
				nVowels++;
				break;
			}
			default:
				nConsonants++;
			}
		}
		else {
			++nOthers;
		}
	} while (ch != '\n');
    printf("nVowels: %d\n", nVowels);
    printf("nConsonants: %d\n", nConsonants);
    printf("nOthers: %d\n", nOthers);
return 0;
}


