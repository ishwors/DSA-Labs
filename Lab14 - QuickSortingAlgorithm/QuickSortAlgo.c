#include <stdio.h>
#include <stdlib.h>

/*Global Variables*/
int i, pivote;


/* Global Functions --- Start --- */
void swap(int arr[],int x, int y)
{
    int temp; 
	temp= arr[x];
    arr[x] = arr[y];
    arr[y]=temp;
}
void printArray(int arr[], int size)
{
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int partition(int arr[], int l, int r){
	int x, y;
	x= l;
	y=r;
	pivote = arr[l];
	
	while(x<y){
		while(arr[x] <= pivote)
			x++;
		
		while(arr[y]>pivote)
			y--;
		
		if(x<y)
			swap(arr, x, y);
	}
	arr[l] = arr[y];
	arr[y] = pivote;
		
	return y;
}




/* Quick Sort Operation --- Start --- */
void quickSort(int arr[], int l, int r)
{
    if(l<r){
    	pivote = partition(arr, l, r);
    	quickSort(arr, l, pivote-1);
		quickSort(arr, 1+pivote, r);
	}
}


int main()
{
//	int l = 0, r, n, arr[100];	
	
	int l = 0;
	
//	printf("Enter Number of Elements : \n");
//	scanf("%d", &n);
//	r = n-1;
//	printf("Enter %d Elements in Your List : \n", n);
//	for(i=0; i<n; i++){
//		scanf("%d \t", &arr[i]);
//	}
	
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int r = n-1;
	
	quickSort(arr, l, r);
	printf("Sorted array list using QuickSortAlgo: \n");
	printArray(arr, n);
	

	return 0;
}
