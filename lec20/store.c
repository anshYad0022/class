#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="world";
    char str2[10];
    int ln= strlen(str1);
    for(int i=0; str1[i]!='\0';i++){
        str2[i]=str1[i];
        printf("%c",str2[i]);
    }
}