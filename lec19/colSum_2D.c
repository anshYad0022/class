#include<stdio.h>
int main(){
    int sum=0;int j=0;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
         sum=sum+arr[i][j]; 
        printf("%d\n",sum);
        j++;
    }
}