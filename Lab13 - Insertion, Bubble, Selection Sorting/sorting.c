#include <stdio.h>
#include <stdlib.h>

/* Global Functions --- Start --- */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void printArrayS(int arr[], int size)
{
    int i;
    for (i = size; i >=0 ; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Global Functions --- Start --- */



/* Bubble Sort Operation --- Start --- */
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
/* Bubble Sort Operation --- End --- */

/* Insertion Sort Operation --- Start --- */
void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
        for (j = i-1; j >= 0; j--)
            if (arr[j-1] > arr[j])
                swap(&arr[j-1], &arr[j]);
}
/* Insertion Sort Operation --- End --- */

/* Selection Sort Operation --- Start --- */
void selectionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
		int least = arr[i];
    	int p = j;
        for (j = i+1; j < n ; j++){
        	if (arr[j] < least){
        		least = arr[j];	
			}
			p = j;
		}
		swap(&arr[i], &arr[p]);
	}
}
/* Selection Sort Operation --- End --- */

  



int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int ch ;
	
	while (1)
	{
		printf("1.Buble Sort \n2.Insertion Sort \n3.Selection Sort\n4.Exit\n");
		printf("Enter your choice for Sorting: ");
		scanf("%d", &ch);

		switch (ch)
		{

		case 1:
		    bubbleSort(arr, n);
		    printf("Sorted array using Bubble Sort: \n");
		    printArray(arr, n);
			break;

		case 2:
 			insertionSort(arr, n);
		    printf("Sorted array using Insertion Sort: \n");
		    printArray(arr, n);
			break;

		case 3:
			selectionSort(arr, n);
		    printf("Sorted array using Selection Sort: \n");
		    printArray(arr, n);
			break;

		case 4:
			exit(0);

		default:
			printf("Invalid choice.\n");
		}
	}
	return 0;
}
