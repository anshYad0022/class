#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i, index=0;
    int s[100];
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter size ");
    scanf("%d",&n);
    for(int i=0 ; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            s[index++]=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            s[index++]=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            s[index++]=arr[i];
        }
    }

    printf("Arranged array:\n");
    for(int i=0;i<n;i++){
        printf("%d",s[i]);
    }
}