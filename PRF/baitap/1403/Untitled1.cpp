#include <stdio.h>
#include <string.h>

char* lTrim (char s[]) {
	int i = 0;
	while (s[i] == ' ') i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

int main() {
	char s[100];
	printf("Nhap string: ");
	scanf("%s", s);
	printf("Left trim string: %s", lTrim(s));
    return 0;
}


