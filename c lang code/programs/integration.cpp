#include <stdio.h>
int main(){
	
	int x,r;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of r:");
	scanf("%d",&r);
	//function integral 2x*dx+(r/2).dx
	printf("the integral of 2x.dx +r/2.dx where x=%d and r=%dis %d Ans. ",x,r,(x*x)+((r*x)/2));
	return 0;
}
