#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter size ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));


    printf("\nEnter %d elements: \n",n);
    for(int i=0 ; i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter new size");
    int new;
    scanf("%d", &new);
    arr= (int *)realloc(arr, new * sizeof(int));
    printf("\nEnter %d new elements: \n",new);
    for(int i=0;i<new;i++){
        scanf("%d", &arr[i]);
    }
    printf("\nPrint updated array:\n");
    for(int i=0;i<new;i++){
        printf("%d",arr[i]);
    }
}