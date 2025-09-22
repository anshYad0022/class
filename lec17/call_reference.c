#include<stdio.h>
int sum(int *x,int *y){
    *x=10;
    *y=10;
    int c=*x+*y;
    return c;
}
int main(){
    int x=10;
    int y=10;
    int sum=x+y;
    printf("%d",x+y);
    printf("%d",sum);
}