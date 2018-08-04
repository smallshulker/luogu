#include<cstdio>
#include<cstring>
unsigned long long f[100005];
int main() {
	long long n,k;
	scanf("%lld %lld",&n,&k);
	memset(f,0,sizeof(f));
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=k&&i-k>=0; j++) {
			f[i]+=f[i-j];
		}
		f[i]+=i;
		if(f[i]>=1234567890) {
			printf("%lld",f[i]);
			return 0;
		}
	}
	printf("%lld",f[n]);
	return 0;
}
