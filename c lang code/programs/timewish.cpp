#include<stdio.h>
int main(){
	int time;
	printf("Enter the time:");
	scanf("%d",&time);
	if(time>=0 && time<=24){
	if(time>=0 && time<12)print("Good Morning");
	elif(time>=12 && time<=18)print("Good AfterNoon");
	elif(time>=18 && time<=24)print("Good Night");
	}
	else print("error in time");
	return 0;
}
