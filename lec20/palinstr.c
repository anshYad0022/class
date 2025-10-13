#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="madam";
    int ln= strlen(str1);
    for( int i=0; i<=ln/2;i++){
        if(str1[i]=str1[ln-1-i]){
            continue;
        }else {
            printf("str is not pal");
            break;
        }
        printf("str is palindrome");
    }
    printf("str is palindrome");
}