#include <stdio.h>
/*5)An array contains 12 numbers. Write a program to remove all occurrences of a given number and shift
remaining elements left.
For example user enters 1 , 2 , 4 , 5 , 7 ,7 , 7 ,8,9,10,10,11 as an array want to remove 7 than the output will
be 1 , 2 ,4,5, 8, 9 , 10, 10,11*/
int main(){
	int arr[12];
	int num,i;

	for(i=0;i<12;i++){
		printf("Enter values: ");
		scanf("%d", &arr[i]);
	}
	printf("What number do you want to eliminate: ");
	scanf("%d", &num);
	
	for(i=0;i<12;i++){
		if(arr[i]!=num){
			printf("%d, ", arr[i]);
		}
	}
	
}
