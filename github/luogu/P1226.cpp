#include<cstdio>
using namespace std;
long long quickpow(long long a,long long x,long long y)
{
    if(x==0)return 1;
    long long k=quickpow(a,x/2,y);
    if(x%2==1)
        return k=k*k*a%y;
    return k*k%y;
}

int main()
{
    long long b,p,k;
    scanf("%lld %lld %lld",&b,&p,&k);
    printf("%lld^%lld mod %lld=%lld",b,p,k,quickpow(b,p,k));
    return 0;
}
