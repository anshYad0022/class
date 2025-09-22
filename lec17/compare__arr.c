#include<stdio.h>
int main(){

    int n;
    printf("Enter size of both arr");
    scanf("%d",&n);

    int a[n];
    int b[n];
    printf("\nEnter elements of first array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
      printf("\nEnter elements of second array");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int *x=a;
    int *y=b;
    int found=1;
    for(int i=0;i<n;i++){
        if(*x!=*y){
           printf("\nArrays are not equal");
           found=0;
           break;
        }
    }
    if(found)
    printf("\nArray is equal.");
}