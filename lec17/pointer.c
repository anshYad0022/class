#include<stdio.h>
// int sum(int x, int y){
//       x=10;
//       y=20;
//       return x+y;
// }

// int main(){
//     int x=30;
//     int y=40;
//     int data=sum(x,y);
//     printf("%d",data);
//     printf("\n%d",x+y);
// }



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