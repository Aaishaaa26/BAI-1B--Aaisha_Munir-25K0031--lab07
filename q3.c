#include <stdio.h>
int main(){
	int pass[10],fail[10],count=0,total=0,marks,i=0,j=0,k;
	float avg;
	printf("Enter marks:");
	scanf("%d",&marks);
	while(marks!=-1 && count<10){
		if(marks>=5 && marks<=10){
		pass[i]= marks;
		++i;
		total= total+marks;
		count=count+1;
		}
		if(marks>=0 && marks<5){
		fail[j]=marks;	
		++j;
		total= total+marks;
		count=count+1;
		}
		printf("Enter marks:");
	    scanf("%d",&marks);
	}
	printf("Printing passing marks:\n");
	for(k=0;k<i;k++){
		printf("%d\n",pass[k]);
	}
	printf("Printing failing marks:\n");
	for(k=0;k<j;k++){
		printf("%d\n",fail[k]);
	}
	avg= total/count;
	printf("The average is %.2f", avg);
	return 0;
}
