#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hii";
    int ln= strlen(str);
    // printf("%c\n",str[0]);
    for(int i=ln;i>=0;i--){
        printf("%c\n",str[i]);
    }
}