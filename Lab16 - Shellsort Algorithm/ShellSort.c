#include <stdio.h>
#include <stdlib.h>

/*Global Variables*/

/*To Print Sorted List*/
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int arr[], int size)
{ int i;
    for (i = 0; i <size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

/* InsertionSort Operation --- Start --- */
//void insertionSort(int arr[], int n, int l)
//{
//    int i, j;
//    for (i = 0; i < n; i++){
//    	for (j = n; j >= 0; j = j-l){
//    		if (arr[j-l] > arr[j]){
//    			swap(&arr[j-l], &arr[j]);
//			}
//		}	
//	}
//}

void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = n/2; i > 0; i/=2){
    	for (j = i; j < n ; j++){
    		int temp = arr[j];
    		
    		int k;
		      for (k = j; k >= i && arr[k - i] > temp; k -= i) {
		      	arr[k] = arr[k - i];
		      }
		}	
	}
}


/*Main Function*/
int main()
{
	
	int arr[] = {67, 45, 46, 99, 23 };
	int n = sizeof(arr)/sizeof(arr[0]);
	
//	int i, j;
//	for (i=0; i<n; i++)	{
//		int count = 2;
//		insertionSort(arr, n, n/count);
//		count = count + 2;
		
//		for (j = n; j >= 0; j = j-count){
//    		if (arr[j-count] > arr[j]){
//    			swap(&arr[j-count], &arr[j]);
//			}
//		}
//	}
	
	insertionSort(arr, n);
	
	printf("Sorted array list using ShellSortAlgo: \n");
	printArray(arr, n);
	

	return 0;
}
