#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10

void InitARR(int*& arr, int len) {
	arr = (int*)calloc(len, sizeof(int));

	for (int i = 0; i < len; i++) {
		if (arr)
			arr[i] = rand() % 100;
	}
}

void PrintARR(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

void InsertionSort(int* arr,int len) {
	int i = 0, j = 0, insertVal = 0;
	for (i = 1; i < len; i++) {
		insertVal = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > insertVal; j--) { //比要插入的元素大的数逐个后移
			arr[j + 1] = arr[j];
		}
		arr[j+1] = insertVal;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int* ARR = NULL;
	int i = 0;
	InitARR(ARR, length);
	PrintARR(ARR, length);
	printf("\n\n-------InsertionSort--------\n\n");
	InsertionSort(ARR,length);
	PrintARR(ARR, length);

	return 0;
}
