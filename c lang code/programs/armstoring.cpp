#include <stdio.h>
int main(){
	int start,end,i,rem,armeq,a;
//	scanf("%d %d",&start,&end);
i=1;
while(i<=500){
a=i;
	while(a!=0){
		rem=a%10;
		armeq=armeq+(rem*rem*rem);
		a=a/10;
	}
	if(armeq==i){
		printf("%d\t",i);
	}
	i++;
}
	return 0;
}
