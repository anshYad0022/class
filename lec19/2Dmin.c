#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,11,7,8,9};
    int min=a[0][0];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(a[i][j]<min){
            min=a[i][j];
           } 
        }
}
printf("Mini is %d",min);
return 0;
}