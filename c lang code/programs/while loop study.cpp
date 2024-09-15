#include <stdio.h>
int main(){
	int num,i=0,sum=0,ld;
	//sum of digits
	scanf("%d",&num);
	
	while(num>0){
		ld=num%10;
		sum=sum+ld;
		num=num/10;
		i++;
	}
		printf("the no. of d are %d",sum);
	
	return 0; 
}
