#include<stdio.h>
int main()
{
    int arr[6]={10,-10,20,30,-40,50};
    int sum=0;
    int max=0;
    int i,j;
    for(int i=0;i<=6;i++)
    {
        for(int j=0;j<=6;j++)
        {
            sum=arr[i]+arr[j];
        }
        
    }
    if(max>sum)
        {
            printf("%d %d",arr[i],arr[j]);
        }
        else{
            printf("%d %d",arr[i],arr[j]);
        }
}