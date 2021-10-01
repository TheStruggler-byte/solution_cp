// C program to implement recursive Binary Search 
#include <stdio.h> 

int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		if (arr[mid] == x) 
			return mid; 

		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		return binarySearch(arr, mid + 1, r, x); 
	} 

	return -1; 
} 

int main(void) 
{   
    int i;
	int arr[] = { 2, 3, 4, 10, 40 , 44 ,49 ,55 ,58}; //sorted array for binary search
	int size = sizeof(arr) / sizeof(arr[0]);//for calculating the size of the array
    for(i = 0; i < size; i++){printf("%d ",arr[i]);}
    int key ;
    printf("\nEnter key for searching: ");
    scanf("%d", &key);
	int result = binarySearch(arr, 0, size - 1, key); // size-1 because array start with index 0
	(result == -1) ? printf("Element %d is not present in array",key) : printf("Element %d is present at index %d",key,result); 
	return 0; 
} 
