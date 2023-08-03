#include <stdio.h>
#include <string.h>

const int STRLEN = 100;
const int NUMBEROFSTUDENTNAME = 100;

void add(char studentNameList[][STRLEN], char studentName[], short* studentNameListSize) {
	(*studentNameListSize) += 1;
	short currNameIndex = (*studentNameListSize) - 1;
	char* token = NULL;
	token = strtok(studentName, " ");
	strcpy(studentNameList[currNameIndex], strupr(token));
	while (true) {
		token = strtok(NULL, " ");
		if (!token) {
			return;
		}
		strcat(studentNameList[currNameIndex], " ");
		strcat(studentNameList[currNameIndex], strupr(token));
	}
}

void deleteStudent(char studentNameList[][STRLEN], short* studentNameListSize, int inputIndex) {
	if (inputIndex == (*studentNameListSize) - 1) {
		strcpy(studentNameList[inputIndex], "");
	} else {
		short currNameIndex;
		for (currNameIndex = inputIndex; currNameIndex < (*studentNameListSize); ++currNameIndex) {
			strcpy(studentNameList[currNameIndex], studentNameList[currNameIndex + 1]);
		}
	}
	(*studentNameListSize) -= 1;
}

int search(char studentNameList[][STRLEN], short studentNameListSize, char studentName[]) {
	short currNameIndex;
	int check = -1;
	for (currNameIndex = 0; currNameIndex < studentNameListSize; ++currNameIndex) {
		if (strcmp(studentNameList[currNameIndex], studentName) == 1) {
			check = 1;
		}
	}
	return check;
}

void sortStudent(char studentNameList[][STRLEN], short studentNameListSize) {
	char swapStr[STRLEN] = "\0";
	int i;
	int j;
	for (i = 0; i < studentNameListSize - 1; ++i) {
		for (j = i + 1; j < studentNameListSize; ++j) {
			if (strcmp(studentNameList[i], studentNameList[j]) > 0) {
				strcpy(swapStr, studentNameList[i]);
				strcpy(studentNameList[i], studentNameList[j]);
				strcpy(studentNameList[j], swapStr);
			}
		}
	}
}

void printList(char studentNameList[][STRLEN], short studentNameListSize) {
	short currNameIndex;
	printf("\n[");
	for (currNameIndex = 0; currNameIndex < studentNameListSize - 1; ++currNameIndex) {
		printf("%s, ", studentNameList[currNameIndex]);
	}
	printf("%s]\n", studentNameList[currNameIndex]);
}

int main() {
	char studentNameList[NUMBEROFSTUDENTNAME][STRLEN];
	short studentNameListSize = 0;
	int choice;
	printf("--- MENU ---\n");
	printf("1. Add a student\n");
	printf("2. Remove a student\n");
	printf("3. Search a student\n");
	printf("4. Print the list in ascending order\n");
	printf("5. Quit\n");
	do {
		printf("Your choice : ");
		scanf("%d", &choice);
		switch (choice)	{
			case 1: {
				char studentName[STRLEN] = "\0";
				printf("Student name: ");
				scanf("%s", studentName);
				add(studentNameList, studentName, &studentNameListSize);
				printf("Add successfully !!\n");
				break;
			}
			case 2: {
				if (studentNameListSize == 0) {
					printf("There is no students yet\n");
					break;
				}
				long inputIndex;
				printf("Input index: ");
				scanf("%d", &inputIndex);
				if (inputIndex < 0 || inputIndex >= studentNameListSize) {
					printf("There is no such student\n");
				} else {
					deleteStudent(studentNameList, &studentNameListSize, inputIndex);
				}
				break;
			}
			case 3: {
				if (studentNameListSize == 0) {
					printf("There is no students yet\n");
					break;
				}
				char studentName[STRLEN] = "\0";
				printf("Student name: ");
				scanf("%s", studentName);
				if (search(studentNameList, studentNameListSize, studentName)) {
					printf("Student is found\n");
				} else {
					printf("Student is not found\n");
				}
				break;
			}
			case 4: {
				if (studentNameListSize == 0) {
					printf("There is no students yet\n");
					break;
				}
				sortStudent(studentNameList, studentNameListSize);
				printList(studentNameList, studentNameListSize);
				break;
			}
		}
	} while ((choice > 0) && (choice < 5));
	return 0;
}

