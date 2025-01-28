#include <stdio.h>
int main(){
    char name[20];
    int age;
    char hobby[30];
    scanf("%s %i %s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %i\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}