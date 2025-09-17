#include<stdio.h>
int main()
{
    int arr[7]={2,3,1,5,6,7};
    int k=7;
    for(int i=0;i<=7;i++)
    {
        for(int j=0;j<=7;j++)
        {
        if(arr[i]+arr[j]==k)
            {
            printf("%d%d\n",i,j);
            }
        }
    }
}