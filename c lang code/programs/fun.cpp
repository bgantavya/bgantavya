#include<stdio.h>
#include<math.h>
int factorial(int a){
	int fact;
	for( int i=1;i<=a;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
//void england(){
//	printf("\t welcome team england\n");
//	return;
//}
//void australia(){
//	printf("\t welcome team australia\n");
//	england();
//	return;
//}
//void india(){
//	printf("\t welcome team india\n");
//	australia();
//	return;}	
//void greet(){
//printf("\t how was your day\n")	  ;
//	india();
//return;   
//}
//int main(){
//	greet();
//	return 0;
//} 
//sum of two variables;
//int add(int x, int y){
//	int add(int x,int y){
//		return x+y;
//	}
//}
//int main(){
//int a;
//printf("enter the value of b:");
//scanf("%d",&a);
//int b;
//printf("enter the value of b:");
//scanf("%d",&b);
//int sum = add(a,b)
//printf("%d",sum);
//return 0;
//}
//int a;
//printf("enter a number: ");
//scanf("%d",&a);
//int root= sqrt(a);
//int powr= pow(3,2);
//printf("the squareroot is:%d %d",root, powr);
//return 0;
//}
int x,y,ans;
scanf("%d %d",&x,&y);
ans = factorial(x);
printf("%d",ans);
return 0;
}
