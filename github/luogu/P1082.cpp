#include<cstdio>
long long exgcd(long long a,long long b,long long &x,long long &y){
  if(!b){x=1,y=0;return a;}
    else{
        long long d = exgcd(b,a%b,y,x);
        y-=(a/b)*x;
        return d;
    }
}
int main()
{
    long long a,b,x,y;
    scanf("%lld %lld",&a,&b);
    exgcd(a,b,x,y);
    printf("%lld",(x+b)%b);
    return 0;
}
