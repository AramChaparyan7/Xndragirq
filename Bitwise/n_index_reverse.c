#include <stdio.h>

int main(){
    int num=0,n=0;
    scanf("%d %d",&num,&n);
    int h=1<<n;
    num^=h;
    printf("%d\n",num);
    return 0;
}
