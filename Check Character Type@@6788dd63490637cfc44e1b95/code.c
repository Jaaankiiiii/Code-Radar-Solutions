#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u'){
        printf("Vowel");
    }
    else if(c>='A' && c<='Z' || c>='a' && c<='z'){
        printf("Consonant");
    }
    else if(c>=48 && c<=50){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}