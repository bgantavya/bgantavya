#include <stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
					printf("\n");
	}
}
