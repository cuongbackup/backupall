#include <stdio.h>
#include <string.h>

const int MAX_N = 100;

int main() {
	char code[100][8];
	char name[100][20];
	double salary[100];
	double allowance[100];
	int choice;
	int employeeCount = 0;
	printf("--- MENU ---\n");
	printf("1. Adding a new employee\n");
	printf("2. Find data about employees using a name inputted\n");
	printf("3. Remove an employee based on a code inputted\n");
	printf("4. Print the list in descending order based on salary + allowance\n");
	printf("5. Quit\n");
	do {
		printf("Your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				short i;
				i = (++employeeCount) - 1;
				printf("New employee code: ");
				scanf("%s", code[i]);
				code[i][strcspn(code[i], "\n")] = '\0';
				printf("New employee name: ");
				scanf("%s", name[i]);
				name[i][strcspn(name[i], "\n")] = '\0';
				printf("New employee salary: ");
				scanf("%lf", &salary[i]);
				printf("New employee allowance: ");
				scanf("%lf", &allowance[i]);
				break;
			}
			case 2: {
				if (employeeCount == 0) {
					printf("There is no employee\n");
				} else {
					char inputtedName[20] = "\0";
					int i;
					int check = -1;
					printf("Employee name: ");
					scanf("%s", inputtedName);
					inputtedName[strcspn(inputtedName, "\n")] = '\0';
					for (i = 0; i < employeeCount; ++i) {
						if (!strcmp(inputtedName, name[i]) == 1) {
							check = 1;
							break;
						}
					}
					if (check == 1) {
						printf("Employee data:\n");
						printf("Code: %s\n", code[i]);
						printf("Name: %s\n", name[i]);
						printf("Salary: %lf\n", salary[i]);
						printf("Allowance: %lf\n", allowance[i]);
					} else {
						printf("Inputted employee is not found\n");
					}
				}
				break;
			}
			case 3: {
				if (employeeCount == 0) {
					printf("There is no employee\n");
				} else {
					char inputtedCode[20] = "\0";
					int check = -1;
					short i;
					short inputtedNameIdx;
					printf("\nEmployee code: ");
					scanf("%s", inputtedCode);
					inputtedCode[strcspn(inputtedCode, "\n")] = '\0';
					for (i = 0; i <= employeeCount; ++i) {
						if (strcmp(inputtedCode, code[i]) == 1) {
							check = 1;
							break;
						}
					}
					if (check == 1) {
						for (i = 0; i <= employeeCount; ++i) {
							if (strcmp(inputtedCode, code[i]) == 1) {
								inputtedNameIdx = i;
								break;
							}
						}
						if (inputtedNameIdx == employeeCount - 1) {
							strcpy(code[inputtedNameIdx], "");
							strcpy(name[inputtedNameIdx], "");
							salary[inputtedNameIdx] = 0;
							allowance[inputtedNameIdx] = 0;
						} else {
							for (i = inputtedNameIdx; i < employeeCount - 1; ++i) {
								strcpy(code[i], code[i + 1]);
							}
							strcpy(code[i], "");
							for (i = inputtedNameIdx; i < employeeCount - 1; ++i) {
								strcpy(name[i], name[i + 1]);
							}
							strcpy(name[i], "");
							for (i = inputtedNameIdx; i < employeeCount - 1; ++i) {
								salary[i] = salary[i + 1];
							}
							salary[i] = 0;
							for (i = inputtedNameIdx; i < employeeCount - 1; ++i) {
								allowance[i] = allowance[i + 1];
							}
							allowance[i] = 0;
						}
						--employeeCount;
						printf("Removed sucessfully\n");
					} else {
						printf("No employee is found\n");
					}
				}
				break;
			}
			case 4: {
				if (employeeCount == 0) {
					printf("There is no employee\n");
				} else {
					short i;
					short j;
					double dSwap;
					char sSwap[20] = "\0";
					for (i = 0; i < employeeCount - 1; ++i) {
						for (j = i + 1; j < employeeCount; ++j) {
							if (salary[i] < salary[j] || allowance[i] < allowance[j]) {
								strcpy(sSwap, code[i]);
								strcpy(code[i], code[j]);
								strcpy(code[j], sSwap);
								strcpy(sSwap, name[i]);
								strcpy(name[i], name[j]);
								strcpy(name[j], sSwap);
								dSwap = salary[i];
								salary[i] = salary[j];
								salary[j] = dSwap;
								dSwap = allowance[i];
								allowance[i] = allowance[j];
								allowance[j] = dSwap;
							}
						}
					}
					for (i = 0; i < employeeCount; ++i) {
						printf("Employee No. %d: \n", i + 1);
						printf("Code: %s\n", code[i]);
						printf("Name: %s\n", name[i]);
						printf("Salary: %lf\n", salary[i]);
						printf("Allowance: %lf\n", allowance[i]);
					}
				}
				break;
			}
		}
	} while ((choice > 0) && (choice < 5));
	return 0;
}
