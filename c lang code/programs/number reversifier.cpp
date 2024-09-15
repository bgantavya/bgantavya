#include<stdio.h>
int main(){
	int i = 0, a = 0, n; 
	scanf(" %d ", &n );
	while( n != 0 ){
		a = ( (n % 10) + a ) * 10;
		n = n / 10;
		i++;
	}
	a= a / 10;
	printf(" %d ", a );
	return 0;
}
