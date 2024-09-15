#include <stdio.h>
//area of circle calculator
int main()
{
	float rad, area ;
	printf("enter the radius:");
	scanf("%f",&rad);
	area= 3.14*rad*rad;
	printf("the are is %.2f\n",area);
	return 0;
}
