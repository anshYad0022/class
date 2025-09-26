#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,11,7,8,9};
    int b[3][3]={3,1,4,11,2,7,4,3,10};
    int max1=a[0][0];
    int max2=b[0][0];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(a[i][j]>max1){
            max1=a[i][j];
           } 
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(b[i][j]>max2){
            max2=b[i][j];
           } 
        }
    }

    if(max1>max2){
        printf("Max is %d",max1);
    }else printf("Max is %d",max2);
return 0;
}