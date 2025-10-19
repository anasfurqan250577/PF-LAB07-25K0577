#include <stdio.h>
void main(){
	int arr[10] = {0,0,1,0,0,1,0,1,0,0};
	int seat,count=0;
	
	int n;
	printf("Seat Status: ");
	for(n=0; n<10; n++){
		printf("%d  ", arr[n]);
	}
	printf("\nHere 0 means empty and 1 means booked.\n");
	
	do{
		printf("\nEnter a seat number (0-9): ");
		scanf("%d", &seat);
		
		if(arr[seat] == 0){
			printf("Your booking has been confirmed successfully!\n");
			arr[seat] = 1;
			count++;
		}
		else{
			printf("Seat already booked!\n");
		}
		
	}while(count<5);
	
	int i;
	printf("\nUpdated Seat Status: ");
	for(i=0; i<10; i++){
		printf("%d  ", arr[i]);
	}
}
