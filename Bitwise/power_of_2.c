#include <stdio.h>

int main(){
    int num=0;
    scanf("%d",&num);
    if((num&(num-1)) == 0){
        printf("power of 2\n");
    }else{
        printf("not power of 2\n");
    }
    return 0;
}
