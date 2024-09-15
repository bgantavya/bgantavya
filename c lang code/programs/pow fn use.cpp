#include <stdio.h>
int main(){
	//finding powers without pow function
	int b,i,a,n=1;
	scanf("%d %d",&a,&b);
for(i=1;i<=b;i++){
	n=n*a;
}
printf("%d",n);
	return 0;
}
