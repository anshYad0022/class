#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "helloo";
    int ln= strlen(str);
    for(int i=0;i<ln;i++){
        for(int j=1+i;j<ln;j++){
           if(str[i]==str[j]){
            printf("%c",str[j]);
           }
        }
    }
}