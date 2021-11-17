// lizoNaredu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void sort(int*, int);
void order(int *, int *);						// ###


int _tmain(int argc, _TCHAR* argv[])
{
	int random_array[] = { 1, 66, 8, 4, 5289, 6, 95, 8, 22, 10, 482, 308, 18143, 138357, 27482, 10, 58 };
	int n = sizeof(random_array) / sizeof(int);
	sort(random_array, n);
	int i;
	for (i = 0; i < n; i++) {
		cout << random_array[i] << endl;
	}
	return 0;
}

void sort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				order(&arr[j], &arr[j + 1]);	// ###
			}
		}
	}
}

void order(int *a, int *b) {					//###
	int max;
	max = *a;									//###
	*a = *b;									//###
	*b = max;									//###
}
