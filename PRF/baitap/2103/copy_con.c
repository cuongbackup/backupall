#include <stdio.h>
#include <ctype.h>

int exist(char* filename) {
	int existed = -1;
	FILE* f = fopen(filename, "r");
	if (f != NULL) {
		existed = 1;
		fclose(f);
	}
    return existed;
}

int writeFile(char* filename) {
	char c;
	int CTRL_Z = -1;
	if (exist (filename) == 1)
	{
		printf("The file %s existed, override it Y/N? : ", filename);
	    if (toupper(getchar()) == 'N') return -1;
	}
	FILE* f = fopen(filename, "w");
	fflush(stdin);
	do {
		c = getchar();
		if (c != CTRL_Z) fputc(c,f);
	}
	while (c != CTRL_Z);
	fclose(f);
	return 1;
}

int main(int argCount, char* args[]) {
	if (argCount != 2) printf ("Syntax: copy_con filename\n");
	else if (writeFile(args[1]) == 1) {
		printf("Writing the file %s: done\n", args[1]);
	}
	else printf("Can not write the file %s\n", args[1]);
	return 0;
}

