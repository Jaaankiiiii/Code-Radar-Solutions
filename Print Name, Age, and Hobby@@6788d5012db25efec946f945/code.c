#include <stdio.h>
int main(){
    char name[20];
    int age;
    char hobby[30];
    scanf("%c %i %c",&name,&age,&hobby);
    printf("Name: %c\n",name);
    printf("Age: %i\n",age);
    printf("Hobby: %c\n",hobby);
}