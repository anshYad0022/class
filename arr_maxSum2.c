#include<stdio.h>
int main()
{
    int n,maxsum=0,currsum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum+=a[j];
            if(currsum>maxsum)
            {
                maxsum=currsum; 
            }
        }
    }
    printf("Max Sum = %d",maxsum);
}
