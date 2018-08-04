#include<cstdio>
long long inv[3000005];
int main(){
	long long n,p;
    scanf("%lld %lld",&n,&p);
	inv[1]=1;
	printf("1\n");
    for(int i=2;i<=n;i++){
        inv[i]=(p-p/i)*inv[p%i]%p;
        printf("%lld\n",inv[i]);
    }
}
