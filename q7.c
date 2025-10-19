#include <stdio.h>
void main(){
	int arr1[] = {11,12,13,14,15};
	int arr2[] = {16,17,18,19,20,21};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);
	int arr3[n+m], i;
	int k = n+m;
	
	printf("Array 1: ");
	for(i=0; i<n; i++){
		printf("%d ", arr1[i]);
		arr3[i] = arr1[i];
	}
	
	printf("\nArray 2: ");
	for(i=0; i<m; i++){
		printf("%d ", arr2[i]);
		arr3[n+i] = arr2[i];
	}
	
	printf("\nMerged Array: ");
	for(i=0; i<k; i++){
		printf("%d ", arr3[i]);
	}
}
