#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int currsum=0, maxsum=0;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];

        if(currsum>maxsum)
        {
            maxsum=currsum;
        }

    }
    printf("Max Sum=%d",maxsum);
    return 0;
}
