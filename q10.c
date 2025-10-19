#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[10], index=-1;
	
	int i;
	printf("Generated List: ");
	for(i=0; i<10; i++){
		arr[i] = rand()%100;
		printf("%d  ", arr[i]);	
	}
	
	int num;
	printf("\nEnter a number to search in a list: ");
	scanf("%d", &num);
	
	int n;
	for(n = 0; n<10; n++){
		if(arr[n] == num){
			index = n;
			break;
		}
	}
	
	if(index != -1){
		printf("\nYour number %d found at index: %d", num, index);
	}
	else{
		printf("\nYour number %d is not in the list", num);
	}
}
