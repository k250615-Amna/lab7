#include <stdio.h>
/*A user enters a text containing letters, digits, spaces, and special characters. You want to create a
program that extracts only the digits from the input and stores them in an array. Then, calculate the sum
of all extracted digits and display it.*/
int main(){
	char text[100];
	int digit[100];
	int i=0,j=0,k, sum=0;
	printf("Enter text: ");
	scanf("%s", text);
	
	while(text[i] != '\0'){
		if(text[i]>='0' && text[i]<='9'){
			printf("%c", text[i]);
			digit[j]=text[i]-'0';
			//-'0' to convert the string to an integer so it can be stored and added//
			j++;
		}
		i++;
	}
	for(k=0;k<j;k++){
		sum = sum + digit[k];
	}
	printf("the sum is: \n%d", sum);
	
	
	
}

