#include<stdio.h>
int main(){
	int length,breadth,i,j;
	scanf("%d %d",&length,&breadth);
	for(i=1;i<=breadth;i++){
		for(j=1;j<=length;j++){
			printf("*");
		}
		printf("\n");
	}
}
