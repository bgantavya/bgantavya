//si calculator
#include <stdio.h>
int main()
{
float p,r,t;
printf("enter the principal amount:" );
scanf("%f",&p);
printf("enter the rate of interest per annum:" );
scanf("%f",&r);
printf("enter the time in years:" );
scanf("%f",&t);
float a=(p*r*t) / 100;
float an= a+p;
printf("the total amount to be paid on a principal sum of %f at rate of interest of %f in %f years is %f",p,r,t,an);
return 0;
}
