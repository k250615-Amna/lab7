#include <stdio.h>
/*An array stores 10 numbers. Write a program to check whether the array is sorted in ascending order.*/
int main(){
	int num[10];
	int i, count=0;
	for(i=0;i<10;i++){
		printf("Enter a number: ");
		scanf("%d", &num[i]);
	}
	for(i=0;i<9;i++){
		if(num[i]<num[i+1]){
			count++;
		}else{
			break;
		}
	}
	if(count==9){
		printf("The array is in ascending order");
	}else{
		printf("The array is not in ascending order");
	}
	
}
