#include <stdio.h>
int main(){
    int a[]={1,4,5,3,2};
    int n=5;
    int h,l,max=0;
    int count =0;
    for(int i=0;i<n;i++){
        if(l*h>max){
           count++;
           max=l*h;
        }
    }

    printf("%d",max);
}