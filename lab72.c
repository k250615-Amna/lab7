#include <stdio.h>
int main(){
	int marks[10];
	int sum = 0 ;
	int j;
	for(j=0;j<10;j++){
		printf("Enter the marks of students: ");
		scanf("%d" , &marks[j]);
		sum = sum + marks[j];
	}

	float average = sum/10;
	printf("Your average is: %.2f ", average);
}
