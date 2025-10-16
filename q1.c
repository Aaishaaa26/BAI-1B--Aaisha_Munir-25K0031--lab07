#include <stdio.h>
int main(){
	int array[5],num,temp,i,j;
	for(i = 0; i < 5; i++ ){
	printf("Enter A Number:");
	scanf("%d",&num);
	array[i]=num;
	}
	temp=array[4];
	i=3;
	for(j = 4; j > 0; j-- ){
		array[j]=array[i];
		i--;
	}
	array[0]=temp;
	for (i=0;i<5;i++){
		printf("%d",array[i]);
	}

	return 0;
}
