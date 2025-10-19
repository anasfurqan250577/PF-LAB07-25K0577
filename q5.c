#include <stdio.h>
void main(){
	int prices[10] = {30,70,150,50,45,75,40,60,125,100};
	int budget, i, j, found=0;
	printf("Enter Customer's Budget: ");
	scanf("%d", &budget);
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(prices[i] + prices[j] == budget){
				printf("\nFound a pair: %d and %d", prices[i], prices[j]);
				found = 1;
			}
		}
	}
	
	if(found == 0){
		printf("No Pair Found!");
	}
}
