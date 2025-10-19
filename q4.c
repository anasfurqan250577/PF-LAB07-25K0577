#include <stdio.h>
void main(){
	int sales[] = {2,3,5,3,4,2,1,3,3,1,4,3,2,4};
	int n = sizeof(sales) / sizeof(sales[0]);
	int i, j, maxCount=0, mostFrequent;
	
	for(i=0; i<n; i++){
		int currentCount = 0;
		for(j=0; j<n; j++){
			if(sales[i] == sales[j]){
				currentCount++;
			}
		}
		if(currentCount > maxCount){
			maxCount = currentCount;
			mostFrequent = sales[i];
		}
	}
	
	printf("The most Frequent item is %d which sold %d times", mostFrequent, maxCount);
}
