#include <stdio.h>
#include <stdlib.h>

/*Global Variables*/

/*To Print Sorted List*/
void printArray(int arr[], int size)
{ int i;
    for (i = 0; i <size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

/*To merg divided list*/
void merg(int arr[], int l, int m, int r)
{
    int i, brr[10];
	int x = l;
    int y = m;
   	int k = l;
    while(x<m && y<=r){
    	if(arr[x] < arr[y]){
    		brr[k] = arr[x];
    		k++;
    		x++;
		}
		else{
			brr[k] = arr[y];
			k++;
			y++;
		}
	}
	while(x < m){
		brr[k] = arr[x];
		k++;
		x++;
	}
	while(y<=r){
		brr[k] = arr[y];
		k++;
		y++;
	}
	for(i=l; i<=r; i++)
		arr[i] = brr[i];
}

/*Recursively Merg and Sort*/
void mergSort(int arr[], int l, int r)
{
	int m;
    if(l<r){
    	m = (l+r)/2;
    	mergSort(arr, l, m);
		mergSort(arr, m+1, r);
		merg(arr, l, m+1, r);
	}
}

/*MAin Function*/
int main()
{
//	int l = 0;
	
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr)/sizeof(arr[0]);
	
	//int r = n-1;
	
	mergSort(arr, 0, n-1);
	printf("Sorted array list using MergSortAlgo: \n");
	printArray(arr, n);
	

	return 0;
}
