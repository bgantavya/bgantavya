#include<stdio.h>
int main(void){
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter input %d: ",i);
        scanf("%d",&arr[i]);
        sum+= arr[i];
        char al=("enter the %d",i);
        printf("%c",al);
    }
    float a= sum/(float)n;
    printf("%f\n",a );
    printf("hello");
    return 0;
}