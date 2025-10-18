#include <stdio.h>
//Take an array from user that stores the ages of 8 participants. Write a program to find the youngest//
//participant’s age.//
int main(){
	int age[8];
	int i=0, youngest;
	for(i=0;i<8;i++){
		printf("Enter a value for age: ");
		scanf("%d", &age[i]);
	}
	youngest=age[0];
	for(i=1;i<8;i++){
		if(age[i]<youngest){
			youngest = age[i];
		}
	}
	printf("youngest age is %d", youngest);
	
	
}
