#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,2,1};
    int check=0;
    int i;
    for(int i=0;i<5/2;i++)
    {
        if(arr[i]==arr[5-1-i])
        {
            check=1;
            break;
        }
    }

    if(check)
        {
            printf("Number is pallindrome.");
        }
    else 
        { 
            printf("Number is not pallindrome");
        }
    
}