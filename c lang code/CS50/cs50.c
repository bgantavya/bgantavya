#include<stdio.h>
void int_input(text){
    printf(text);
    int a;
    scanf("%d",a);
    return a
}
int main(){
    int height, width;
    printf("Enter the hright and width seperated by space");
    scanf("%d %d",&height,&width);
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            printf("#");}
        printf("\n");}
    printf("thanks for printing");
    return 0;
}