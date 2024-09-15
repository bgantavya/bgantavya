#include<stdio.h>
int main(){
	int a,d,b,i;
	printf("enter any no.");
	scanf("%d",&a);
	printf("enter progression(+) or difference (-)");
	scanf("%d",&d);
	printf("enter the no. of desired output:");
		scanf("%d",&b);
if(d>=0){
	for(i=1;i<=b;i++){
		printf("%d\n",a);
		a=a+d;
	}}
	else if(d<=0){
	for(i=1;i<=b;i++){
		printf("%d\n",a);
		a=a+d;}}
		else{
			printf("invalid entry");
		}
		return 0;
}
