#include <stdio.h>
int main(){
	int num,a,i;
	scanf("%d",&num);
	a=0;
	for(i=2;i<=num - 1;i++){
		if(num%i==0){
		a=1;
		break;}
	}
	if(a==0){
		printf("prime");
	}
	else if(a==1){
		printf("composite");
	}
	else{
		printf("invalid");

	}
	return 0;
}
