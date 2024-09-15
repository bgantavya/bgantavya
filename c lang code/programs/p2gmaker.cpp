#include <stdio.h>
int main(){
	printf("enter you below percentage here: \n");
	int percent, grade;
	//percentage to grade converter
	scanf("%d", percent );
	switch(grade){
		case &percent> 90:
			printf("A grade on %d percentage", percent );
			break;
			case  > 80 &&  < 90:
			printf("B grade on %d percentage", percent );
			break;
			case   > 70 &&  < 80:
			printf("C grade on %d percentage", percent );
			break;  
			case  > 60 &&  < 70:
			printf("D grade on %d percentage", percent );
			break;
			case  > 100:
			printf("+A grade on %d percentage", percent );
			break;
			case   > 50 &&  < 60:
			printf("E grade on %d percentage", percent );
			break;
			default :
			printf("F grade on %d percentage", percent );
			break;
	}
	return 0;
	}
