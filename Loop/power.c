#include <stdio.h>

int main(){
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int res=1;
    while(b--){
        res*=a;
    }
    printf("%d\n",res);
    return 0;
}
