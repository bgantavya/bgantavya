//#include<stdio.h>
//void sum(int a, int b);
//void table(int t);
//int main(){
//	int x=4,y=3;
//	sum(x,y);
//
//	table(x);
//	return 0;
//}
//void sum(int a, int b){
//}
//void table(int t){
//	for(int i=1;i<=10;i++){
//		printf("%d * %d = %d\n",t,i,t*i);
//	}
//}
//#include<stdio.h>
//void addtax(int value, float tax){
//
//	float price=  value+ (value*tax/100);
//	printf("%f",price);
//}
//int main(){
//	int p, t;
//scanf("%d %d",&p	s , &t);
//	addtax(p,t);
//}
//
//#include <stdio.h>
//void artriangle()
//printf("enter the value of base and height:");
//	scanf("%f %f",&base , &height);
//	printf("%f",0.5*base*height);
//}
//
//void arrectangle(){
//	float length,breadth;
//	printf("enter the value of length and breadth:");
//	scanf("%f %f",&length , &breadth);
//	printf("%f",length*breadth);
//}
//
//void arsquare(){
//	float side;
//	printf("enter the value of side:");
//	scanf("%f",&side);
//	printf("%f",side*side);
//}
//void arcircle(){
//	float radius;
//	printf("enter the value of radius:");
//	scanf("%f",&radius);
//	printf("%f",3.14159*radius*radius);
//}
//int main(){
//	printf("area finder app:\nchoose the type of area to find:\n\nA)code to find area of triangle\t\t\t\tB) code to find are of rectangle \n\nC)code to find area of square\t\t\t\tD) code to find area of circle\n\n\n\n");
//	artriangle();
//	printf("error in input");
//}
//
//
//
//
//
//#include <stdio.h>
//
//void artriangle() {
//    float base, height;
//    printf("Enter the value of base and height: ");
//    scanf("%f %f", &base, &height);
//    printf("Area of the triangle: %f\n", 0.5 * base * height);
//}
//
//void arrectangle() {
//    float length, breadth;
//    printf("Enter the value of length and breadth: ");
//    scanf("%f %f", &length, &breadth);
//    printf("Area of the rectangle: %f\n", length * breadth);
//}
//
//void arsquare() {
//    float side;
//    printf("Enter the value of side: ");
//    scanf("%f", &side);
//    printf("Area of the square: %f\n", side * side);
//}
//
//void arcircle() {
//    float radius;
//    printf("Enter the value of radius: ");
//    scanf("%f", &radius);
//    printf("Area of the circle: %f\n", 3.14159 * radius * radius);
//}
//
//int main() {
//    printf("Area Finder App:\nChoose the type of area to find:\n\nA) Code to find area of triangle\nB) Code to find area of rectangle\nC) Code to find area of square\nD) Code to find area of circle\n\n");
//
//    char choice;
//    scanf(" %c", &choice);  // Note the space before %c to consume any whitespace characters
//    switch (choice) {
//        case 'A':
//            artriangle();
//            break;
//        case 'B':
//            arrectangle();
//            break;
//        case 'C':
//            arsquare();
//            break;
//        case 'D':
//            arcircle();
//            break;
//        default:
//            printf("Invalid choice\n");
//            return 1;  // Exit with an error code
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//#include <stdio.h>
//void india(){
//	printf("Namaste");
//}
//
//void french(){
//	printf("bonjour");
//}
//
//void error404(){
//	printf("invalid entry");
//}
//
//int main(){
//	char nationality;
//	
//printf("dfrbr
//egrgf
//rgtrggrrgg
//ggg55");
//	scanf("%c",&nationality);
//	switch (nationality){
//	case 'A': 
//		india();
//		break;
//	case 'B' :
//		french();
//		break;
//	default: 
//		error404();
//		break;
//}
//return 0;
//}
//
//
//#include<stdio.h>
//int sum(int a, int b);
//void table(int t);
//int main(){
//	int x=4,y=6;
//	int s=sum(4,6 );
//	int	
//	printf("%d",s);
//return 0;
//}
//
//int sum(int a, int b){
//	return a+b;
//}
//
//
//
//
//recursion
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int factorial(int n){
//	if(n==0){
//		return 1;
//	}
//	int factnm1=factorial(n-1);
//	int fact= factnm1*n;
//	return fact;
//}
//int main(){
//	factorial finder with the help of recursive function
//	int x=5;
//	int s=factorial(x);
//	printf("%d",s);
//	
//}
//
//
//
//fibonacci series sequence
//#include<stdio.h>
//int fibonacci(int g){
//	int t=0;
//	for(int i=0;i<= g;i++){
//		t+=i;
//		printf("%d\t",t);
//	}}
//	
//	int main(){
//		int k;
//	scanf("%d",&k);
//	printf("fibonacci series:\n");
//	fibonacci(k);
//	return 0;
//}
//
// 
//
//
//
//
//#include<stdio.h>
//int fibonacci(int n){
//	if(n==0)return 0;
//	if(n==1)return 1;
//	int fibn1= fibonacci(n-1);
//	int fibn2= fibonacci(n-2);
//	int fibn=fibn1+fibn2;
//	printf("%d\t",fibn);
//}
//int main(){
//	int x=20;
//	printf("%d",	fibonacci(x));
//	return 0;
//}
//
//
//#include<stdio.h>
//void fib(){
//	int n;
//	for(int i=0;i<=n;i++){
//		int t=0;
//		
//	}
//}
//
//
//
//#include<stdio.h>
//int main(){
//	int age=22;
//	int*ptr=&age;
//	int _age=*ptr;
//	printf("%u\n%u\n%u\n",*&ptr,_age,age);
//return 0;
//}

#include<stdio.h>
int main(){
//	int h=5;
//	for(int i=h;i>=1;i--){
//		for(int j=i;j>=1;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
int reema ,x= reema*30;
printf("%d",x);





	return 0;
}


