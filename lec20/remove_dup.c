#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "hellooioii";
    int ln= strlen(str);
    
    for(int i=0;i<ln;i++){
        for(int j=i+1;j<ln;j++){
            if(str[i]==str[j]){
                for(int k=j;k<ln;k++){
                    str[k]=str[k+1];
                }
                ln--;
            }j++;
        }
  }
  printf("string after removing characters = %s",str);
}