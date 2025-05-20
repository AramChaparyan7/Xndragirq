#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int sum=0;
    int h=n;
    while(h>0){
        int g=h%10;
        sum+=g*g*g;
        h/=10;
    }
    printf(sum==n?"Yes\n":"No\n");
    return 0;
}
