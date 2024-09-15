#include<stdio.h>
int main(){
	// program to check whether you are eligible for driving licence or not//
	printf("enter your age: ");
	int a;
	scanf("%d",&a);
	if(a<=18){
 		printf("uneligible #underage");}
 	else if(a>=80){
 	printf("uneligible #overage");}
      else if(a<80 && a>60	){
	 printf("conditional eligible");}
     else{
	printf("eligible #goodtogo");
}
return 0;
}
