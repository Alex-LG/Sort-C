#include "stdio.h"
#include "stdlib.h"
#include <time.h>

#define DEFAULT_SIZE 10
#define RANDMAX 20

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int sampleArray[DEFAULT_SIZE] = {1, 0, 2, 9, 3, 6, 5, 7, 4, 2};

int randomArray[DEFAULT_SIZE];


void printi(int *arr, unsigned size)
{
	int i;
	for(i = 0; i<size; ++i)
	{
		printf("%d\t", arr[i]);
	}

	printf("\n");
}

void generateRandomArray(int *arr)
{
	int j;

	for(j = 0; j < DEFAULT_SIZE; j++)
	{	
		int r = rand() % RANDMAX + 1;
		arr[j] = r;
	}
}

int main()
{
	srand(time(NULL));

	printf("Bubble sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	bubblesort(randomArray, DEFAULT_SIZE);
	printi(randomArray, DEFAULT_SIZE);

	printf("\nMerge sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	mergesort(randomArray, 0, DEFAULT_SIZE);
	printi(randomArray, DEFAULT_SIZE);

	printf("\nQuick sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	quicksort(randomArray, 0, DEFAULT_SIZE-1);
	printi(randomArray, DEFAULT_SIZE);	

	printf("\nShell sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	shellsort(randomArray, DEFAULT_SIZE);
	printi(randomArray, DEFAULT_SIZE);

	printf("\nGnome sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	gnomesort(randomArray, DEFAULT_SIZE);
	printi(randomArray, DEFAULT_SIZE);

	printf("\nSelect sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	selectsort(randomArray, DEFAULT_SIZE);
	printi(randomArray, DEFAULT_SIZE);

	printf("\nInsert sort \n");	
	generateRandomArray(randomArray);
	printi(randomArray, DEFAULT_SIZE);
	insertsort(randomArray, DEFAULT_SIZE);
	printi(randomArray, DEFAULT_SIZE);


	return 0;
} 


