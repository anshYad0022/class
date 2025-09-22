#include<stdio.h>
int swap(int *x,int *y){
     *x=*x+*y;
     *y=*x-*y;
     *x=*x-*y;
}

int main(){
    int x=5,y=10;
    swap(&x,&y);
    printf("Value of x and y after swap:%d %d",x,y);
}