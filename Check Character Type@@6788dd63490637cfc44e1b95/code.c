#include <stdio.h>
int main(){
    char c;
    scanf("%c",c);
    if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u'){
        printf("Vowel");
        break;
    }
    else if(c>='A' && c<='Z' || c>='a' && c<='z'){
        printf("Consonant");
        break;
    }
    else if(c>=48 && c<=50){
        printf("Digit");
        break;
    }
    else{
        printf("Special Character");
    }
    return 0;
}