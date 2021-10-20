#include <stdio.h>
#include <string.h>
#define tableSize 10000
int HashCode(char s[]){
    int n = strlen(s);
    int code = 0;
    for (int i = 0; i < n;i++){
        code *= 41;
        code += s[i];
    }
    code %= tableSize;
    return code;
}

int main(){
    char s[10000];
    printf("Enter a String: ");
    scanf("%[^\n]%*c",&s);
    printf("Hash Code For Your String Is: %d", HashCode(s));
    return 0;
}