void caserCipher(char msg, int shift, char encrypted)
{
    char *ptr=msg;
    int length=strlen(ptr);
    while(ptr[i]!='\0'){
        if(ptr[i]=' '){
            printf(" ");
        }
        else{
            for(int i=0; i<length; i++){
                ptr[i]=ptr[i]+shift;
                printf("%c",ptr[i]);
            }
        }
    }
}