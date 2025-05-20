#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    if(n<10){
        printf("YES");
        return 0;
    }
    int d=n%10-(n%100)/10;
    while(n>9){
        if(d!=n%10-n%100/10) {
            return 0;
        }
        n/=10;
    }
    printf("YES\n");
    return 0;
}
