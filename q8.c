#include <stdio.h>
void main(){
	int n, k, i;
	printf("Enter number of employees: ");
	scanf("%d", &n);
	
	int ids[n];
	for(i=0; i<n; i++){
		printf("Enter ID %d: ", i+1);
		scanf("%d", &ids[i]);
	}
	
	printf("Enter number of shifts: ");
	scanf("%d", &k);
	k = k % n;
	
	int rotated[n];
	for(i=0; i<n; i++){
		rotated[(i+k)%n] = ids[i];
	}
	
	printf("New Array after %d shifts: ");
	for(i=0; i<n; i++){
		printf("%d ", rotated[i]);
	}
	
}
