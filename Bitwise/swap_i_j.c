#include <stdio.h>

int main(){
    int n=0,i=0,j=0;
    scanf("%d %d %d",&n,&i,&j);
    int a1=(n>>i)&1;
    int a2=(n>>j)&1;
    if(a1!=a2){
        n^=(1<<i);
        n^=(1<<j);
    }
    printf("%d\n",n);
    return 0;
}
