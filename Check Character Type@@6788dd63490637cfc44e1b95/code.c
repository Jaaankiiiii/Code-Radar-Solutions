#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='a' || c=='A' || c=='e' ||c=='E' ||c=='i'||c=='I' ||c=='o'||c=='O' ||c=='u'||c=='U'){
        printf("Vowel");
    }
    else if(c>='A' && c<='Z' || c>='a' && c<='z'){
        printf("Consonant");
    }
    else if(c>=48 && c<=57){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}