#include <stdio.h>
void main(){
	int arr[12] = {2,3,5,3,4,2,1,3,3,1,4,3};
	int i;
	printf("Array of Sold Items: ");
	for(i=0; i<12; i++){
		printf("%d ", arr[i]);
	}
	
	int defect = 3, arr2[12], j=0;
	for(i=0; i<12; i++){
		if(arr[i] != 3){
			arr2[j] = arr[i];
			j++;
		}
	}
	printf("\nArray after removing defect (3): ");
	for(i=0; i<j; i++){
		printf("%d ", arr2[i]);
	}
}
