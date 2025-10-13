#include <stdio.h>
int main(){
	
	int ID[12];
	int i,find,count=0;
	for(i=0;i<12;i++){
		printf("Enter employee ID:");
		scanf("%d", &ID[i]);
	}
	printf("Enter the ID you want to find: ");
	scanf("%d" , &find);
	
	for(i=0;i<12;i++){
		if(find == ID[i]){
			count++;
			break;
		}
	}
	if(count!=0){
		printf("ID exists");
	}else{
		printf("ID does not exist");
	}

	
	
	
}
