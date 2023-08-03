/*
Author: Van Viet Thien Kim
Date: 3/5/2022
Program: Develop a C-program that helps user managing an 1-D array of real numbers(maximum of 100 elements) , with initial number of elements is 0, using the following simple menu:
1- Add a value
2- Search a value
3- Print out the array
4- Print out values in a range
5- Print out the array in ascending order
Others- Quit
*/
#include <stdio.h>
void menu()
{
    printf("\tMENU\n");
    printf("1- Add a value\n");
    printf("2- Search a value\n");
    printf("3- Print out the array\n");
    printf("4- Print out values in a range\n");
    printf("5- Print out the array in ascending order\n");
    printf("Others- Quit\n");
}
void function1(double value, double arr[], int *pn)
{
    arr[*pn] = value;
    (*pn)++;
}
int function2(double value, double arr[])
{
    int i;
    int existences = 0;
    for (i = 0; i <= 100; i++)
    {
        if (arr[i] == value)
        {
            existences++;
        }
    }
    return existences;
}
void function3(double arr[], int *pn)
{
    int i;
    for (i = 0; i <= (*pn) - 1; i++)
    {
        printf("arr[%d]= %lf\n", i, arr[i]);
    }
}
void function4(double arr[], int *pn, double minVal, double maxVal)
{
    int i;
    for (i = 0; i <= (*pn) - 1; i++)
    {
        if (arr[i] >= minVal && arr[i] <= maxVal)
        {
            printf("arr[%d]= %lf\n", i, arr[i]);
        }
    }
}
void function5_1(double arr[], double arr2[], int *pn)
{
    int i;
    for (i = 0; i <= (*pn) - 1; i++)
    {
        arr2[i] = arr[i];
    }
}
void function5_2(double arr[], double arr2[], int *pn)
{
    int minindex, i, j;
    for (i = 0; i <= (*pn) - 2; i++)
    {
        minindex = i;
        for (j = i + 1; j <= (*pn) - 1; j++)
        {
            if (arr2[minindex] > arr2[j])
            {
                minindex = j;
            }
            if (minindex > i)
            {
                int t = arr2[minindex];
                arr2[minindex] = arr2[i];
                arr2[i] = t;
            }
        }
        for (i = 0; i <= (*pn) - 1; i++)
        {
            printf("%lf ", arr2[i]);
        }
    }
}
int main()
{
    double arr[100];
    double arr2[100];
    int function;
    int n = 0;
    double value;
    double minVal, maxVal;
    menu();
    do
    {
        printf("Enter function: ");
        scanf("%d", &function);
        switch (function)
        {
        case 1:
        {
            printf("Enter a value: ");
            scanf("%lf", &value);
            function1(value, arr, &n);
            break;
        }
        case 2:
        {
            printf("Enter a value: ");
            scanf("%lf", &value);
            printf("Number of %lf's existences is: %d\n", value, function2(value, arr));
            break;
        }
        case 3:
        {
            function3(arr, &n);
            break;
        }
        case 4:
        {
            printf("Enter minVal: ");
            scanf("%lf", &minVal);
            printf("Enter maxVal: ");
            scanf("%lf", &maxVal);
            function4(arr, &n, minVal, maxVal);
            break;
        }
        case 5:
        {
            function5_1(arr, arr2, &n);
            function5_2(arr, arr2, &n);
            break;
        }
        }
    } while (function >= 1 && function <= 5);
    return 0;
}
