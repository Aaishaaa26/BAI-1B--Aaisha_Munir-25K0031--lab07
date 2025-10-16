#include <stdio.h>
int main(){
	int array[10],num,i,count=0;
	for(i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d",&num);
		array[i]=num;
	}
    printf("\nEnter a number to be searched:");
    scanf("%d",&num);
    for(i=0;i<10;i++){
    	if(array[i]==num){
    		count=count+1;
		}
	}
	if(count != 0){
	printf("The number %d was found %d time(s)",num,count);
	}
	else{
		printf("The searched number was not found");
	}
		
	return 0;
}
