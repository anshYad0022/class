#include<stdio.h>


int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int x=5,y=10;
    swap(&x,&y);
    printf("Value of x and y originally:%d %d",x,y);
}