#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter number of buildings");
    scanf("%d",&n);
    printf("Enter height of buildings");
    int height[n];
    for(int i=0;i<n;i++){
        scanf("%d",&height[i]);
    }        
    int maxheight=0;
    for(int i=0;i<n;i++){
        if(height[i]>maxheight)
        maxheight=height[i];
    }
    int totalWater = 0;

    
    for (int level = 1; level <= maxheight; level++) {
        int foundWall = 0;
        int gapCount = 0;

        for (int i = 0; i < n; i++) {
            if (height[i] >= level) {
                
                if (foundWall == 1) {
                    totalWater += gapCount;  
                }
                foundWall = 1;
                gapCount = 0; 
            } 
            else if (foundWall == 1) {

                gapCount++;
            }
        }
    }

    printf("Total trapped water = %d units\n", totalWater);
    return 0;

}