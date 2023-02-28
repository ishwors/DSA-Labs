#include<stdio.h>

//  | TC: O(n)
int linearSearch(int arr[], int item, int size){
	int i, n;
	i = 1;
	
	for(i=0; i<size; i++){
		if(arr[i] ==  item){
			printf("Search Successfull. \n");
			return printf("Location of data is %d. \n", i); 	//return i; or		
		}
	}
	return printf("Search Unsuccessfull. \n");
}

//data must be in sorted order in binary search  | TC: O(log n) | iterative and recursive functions used for 
int binarySearch(int arr[], int l, int h, int item){//l=lowest and h=highest bit  | using Recursive Function
	if(l>h){
		printf("Search Unsuccessfull. \n");
	}
	
	else{
		int mid = (l+h)/2;
		
		if (arr[mid] == item){
			printf("Search Successfull. \n");
			printf("Location of data is %d \n", mid);
		}
		else if(arr[mid]<item){
			binarySearch(arr, l+mid, h, item);
		}
		else{
			binarySearch(arr, l, h-mid, item);
		}
	}
}

int main(){
//	int arr[] = {1, 44, 20, 66, 77, 8, 900, 76, 3, 4, 7, 0, 80, 10};
//	int size = sizeof(arr)/sizeof(arr[0]);
	
	int opt;
	printf("1.Linear Search \n2.Binary Search \n");
	printf("Choose any option:  ");
	scanf("%d", &opt);
	
	int item;
	
	switch (opt){
		case 1:
			printf("\nEnter data: ");
			scanf("%d", &item);
			int arr[] = {1, 44, 20, 66, 77, 8, 900, 76, 3, 4, 7, 0, 80, 10};
			int size = sizeof(arr)/sizeof(arr[0]);
			linearSearch(arr, item, size);
			break;

		case 2:
			printf("\nEnter data: ");
			scanf("%d", &item);
			int arrr[] = {1, 4, 12, 16, 17, 20, 900, 901,1110};
			int n = sizeof(arr)/sizeof(arr[0]);
			binarySearch(arrr, 0, n-1, item);
			break;

		case 3:
			exit(0);
			
		default:
			printf("Invalid Option Choosen, \n");
	}
}
