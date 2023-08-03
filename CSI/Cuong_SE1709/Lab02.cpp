/*
Name: Tran Nguyen Quoc Cuong
Date: 2022/02/24
*/

#include <stdio.h>

float CFE(int t, float v, float gas) {
	float result1;
	result1 = (float)t / 60 * v / gas;
return result1;
}

float distanceTraveled(float radius, int revolution) {
	float result2;
	result2 = 2 * 3.1415 * (radius / 63360) * revolution;
return result2;
}

float RFEC(float radius, int revolution, float gas) {
	float result3;
	result3 = distanceTraveled(radius, revolution) / gas;
return result3;
}

int main() {
	int c, revolution, t;
	float v, gas, radius;
	printf("1 - Calculating Fuel Economy\n");
	printf("2 - Calculating Distance Traveled\n");
	printf("3 - Revised Fuel Economy Calculation\n\n");
	printf("Choice feature: ");
	scanf("%d", &c);
	printf("\n");
	switch(c) {
		case 1:
			{
				do {
					printf("How many minutes did you drive?\n");
			    	scanf("%d", &t);
				    printf("What was the average speed of the car during that time?\n");
				    scanf("%f", &v);
			    	printf("How many gallons of gas did your car use?\n");
			    	scanf("%f", &gas);
				} while ((t <= 0) || (v <= 0) || (gas <= 0));							
				printf("Your car averaged %.2f miles per gallon.", CFE(t, v, gas));
				break;
			}
		case 2:
			{
				do {
					printf("What is the radius of your tires, in inches?\n");
				    scanf("%f", &radius);
				    printf("How many revolutions did your car's tire make?\n");
				    scanf("%d", &revolution);
				} while ((radius <= 0) || (revolution <= 0));				
				printf("Your car traveled %.2f miles.", distanceTraveled(radius, revolution));
				break;
			}
		case 3:
			{
				do {
					printf("What is the radius of your tires, in inches?\n");
				    scanf("%f", &radius);
				    printf("How many revolutions did your car's tire make?\n");
				    scanf("%d", &revolution);
				    printf("How many gallons of gas did your car use?\n");
				    scanf("%f", &gas);
				} while ((radius <= 0) || (revolution <= 0) || (gas <= 0));
				printf("Your car averaged %.2f miles per gallon.", RFEC(radius, revolution, gas));
				break;
			}
	}
return 0;
}


