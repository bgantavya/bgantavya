#include<stdio.h>
int main(){
	int n,a=1,i,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a= a*i;
		printf("%d\n",a);
	}

	return 0;
}
