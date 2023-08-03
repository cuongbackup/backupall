#include <stdio.h>
#include <string.h>

const int MAX_N = 100;

int main() {
	char name[100][20];
	char make[100][20];
	int volume[100];
	int	price[100];
	int duration[100];
	int choice;
	short listCount = 0;
	printf("--- MENU ---\n");
	printf("1. Adding a new soft drink\n");
	printf("2. Printing out items which belong to a known make\n");
	printf("3. Printing out items whose volumes are between v1 and v2 (integers)\n");
	printf("4. Printing the list in ascending order based on volumes then prices\n");
	printf("5. Quit\n");
	do {
		printf("Your choice: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1: {
				int i;
				i = (++listCount) - 1;
				printf("\nNew drink name: ");
				scanf("%s", name);
				name[i][strcspn(name[i], "\n")] = '\0';
				printf("New drink make: ");
				scanf("%s", make);
				make[i][strcspn(make[i], "\n")] = '\0';
				printf("New drink volume: ");
				scanf("%d", &volume[i]);
				printf("New drink price: ");
				scanf("%d", &price[i]);
				printf("New drink duration: ");
				scanf("%d", &duration[i]);
				break;
			}
			case 2: {
				if (listCount == 0) {
					printf("There is no drink\n");
				} else {
					char inputtedMake[20] = "\0";
					short i;
					printf("\nInput drink make: ");
					scanf("%s", inputtedMake);
					inputtedMake[strcspn(inputtedMake, "\n")] = '\0';
					printf("Items belonging to a known make: \n");
					for (i = 0; i < listCount; ++i) {
						if (!strcmp(inputtedMake, make[i])) {
							printf("Drink %d:\n", i + 1);
							printf("- Name: %s\n", name[i]);
							printf("- Make: %s\n", make[i]);
							printf("- Volume: %d\n", volume[i]);
							printf("- Price: %d\n", price[i]);
							printf("- Duration: %d\n", duration[i]);
						}
					}
				}
				break;
			}
			case 3: {
				if (listCount == 0) {
					printf("No drinks in the list\n");
				} else {
					int v1;
					int v2;
					int i;
					printf("Input v1: ");
					scanf("%d", &v1);
					printf("Input v2: ");
					scanf("%d", &v2);
					for (i = 0; i < listCount; ++i) {
						if (volume[i] >= v1 && volume[i] <= v2) {
							printf("Drink No. %d:\n", i + 1);
							printf("- Name: %s\n", name[i]);
							printf("- Make: %s\n", make[i]);
							printf("- Volume: %d\n", volume[i]);
							printf("- Price: %d\n", price[i]);
							printf("- Duration: %d\n", duration[i]);
						}
					}
				}
				break;
			}
			case 4: {
				if (listCount == 0) {
					printf("No drinks in the list\n");
				} else {
					short i;
					short j;
					int iSwap;
					char sSwap[20] = "\0";
					for (i = 0; i < listCount - 1; ++i) {
						for (j = i + 1; j < listCount; ++j) {
							if (volume[i] > volume[j] || price[i] > price[j]) {
								strcpy(sSwap, name[i]);
								strcpy(name[i], name[j]);
								strcpy(name[j], sSwap);
								strcpy(sSwap, make[i]);
								strcpy(make[i], make[j]);
								strcpy(make[j], sSwap);
								iSwap = volume[i];
								volume[i] = volume[j];
								volume[j] = iSwap;
								iSwap = price[i];
								price[i] = price[j];
								price[j] = iSwap;
								iSwap = duration[i];
								duration[i] = duration[j];
								duration[j] = iSwap;
							}
						}
					}
					for (i = 0; i < listCount; ++i) {
						printf("Drink No. %d:\n", i + 1);
						printf("- Name: %s\n", name[i]);
						printf("- Make: %s\n", make[i]);
						printf("- Volume: %d\n", volume[i]);
						printf("- Price: %d\n", price[i]);
						printf("- Duration: %d\n", duration[i]);
					}
				}
				break;
			}
		}
	} while ((choice > 0) && (choice < 5));
	return 0;
}


