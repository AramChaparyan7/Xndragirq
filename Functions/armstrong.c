 int armstrong(int n){
    int sum=0;
    int h=n;
    while(h>0){
        int g=h%10;
        sum+=g*g*g;
        h/=10;
    }
    return sum==n?1:0;
}
