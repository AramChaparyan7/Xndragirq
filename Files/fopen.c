#include <stdio.h>

int mystrlen(char *str){
    int res=0;
    while(*str){
        ++str;
        ++res;
    }
    return res;
}

int main(){
    char buffer[512]={};
    printf("input text\n");
    scanf("%s",buffer);
    FILE* f=fopen("stream","w+");
    fwrite(buffer,sizeof(char),mystrlen(buffer),f);
    fclose(f);
    f=fopen("stream","r+");
    fread(buffer,sizeof(char),mystrlen(buffer),f);
    printf("%s\n",buffer);
    fclose(f);
    return 0;
}
