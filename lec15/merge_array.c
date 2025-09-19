#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[10];
    int n=sizeof(c)/sizeof(a[3]);
    
    printf("Array a=");
    for(int i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }

    printf("\nArray b=");
    for(int i=0;i<5;i++)
    {
        printf(" %d",b[i]);
    }

    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
    }

    for(int i=0;i<=5;i++)
    {
        c[i+5]=b[i];
    }
    printf("\nMerged array =");

    for(int i=0;i<10;i++)
    {
    printf(" %d ",c[i]);
    }

    return 0;
}