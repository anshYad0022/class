#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int a=arr[0];
    for(int i=0;i<4;i++)
    {
        arr[i]=arr[i+1];
        printf("%d\n",arr[i]);
    }
    arr[4]=a;
    printf("%d",arr[4]);
}