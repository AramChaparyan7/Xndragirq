#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    if(n<10){
        printf("YES");
        return 0;
    }
    float d=(n%10)/(n%100/10);
    while(n>9){
        if(d!=(n%10)/(n%100/10)) {
            printf("NO");
			return 0;
        }
        n/=10;
    }
    printf("YES\n");
    return 0;
}
