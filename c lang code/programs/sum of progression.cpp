#include<stdio.h>
int main(){
	int n,i,a=0,b=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			a= a-i;
		}
		else{
			b= b+i;
		}
	}
	printf("%d",a+b);
	return 0;
}
