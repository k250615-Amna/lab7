#include <stdio.h>
/*You have an array of 10 integers representing daily profit/loss. Write a program to sum only the positive
values.*/
int main(){
	int profit[10];
	int i, sum=0;
	for(i=0;i<10;i++){
		printf("Enter a value for (profit/loss): ");
		scanf("%d", &profit[i]);
		if(profit[i]>0){
			sum = sum+profit[i];
		}
	}
	printf("Sum of all the positive values is: %d", sum);
	
}
