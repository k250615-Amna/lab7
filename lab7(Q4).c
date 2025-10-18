#include <stdio.h>
//4)You have an array of 6 numbers. Write a program to shift all elements one position to the right, moving
//the last element to the first position.//
int main(){
	int arr[6];
	int i,temp;
	for(i=0;i<6;i++){
		printf("Enter values to shift: ");
		scanf("%d", &arr[i]);
	}
	temp=arr[5];
	for(i=4;i>=0;i--){
		arr[i+1]=arr[i];
	}	
	arr[0]=temp;
	
	for(i=0;i<6;i++){
		printf("%d\n", arr[i]);
	}
	
}
