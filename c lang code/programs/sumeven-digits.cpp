#include<stdio.h>
int main(){
	int i = 0, ld, n, sum = 0;
	scanf("%d",&n);
	//sum of all even digits of given number//
	while( n > 0 ){
		ld = n % 10;
		if( ld % 2 == 0 ){
			sum = ld + sum;
		}
		i++;
		n = n / 10;
	}
	printf("%d",sum);
	return 0;
}
