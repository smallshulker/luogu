#include<cstdio>
int ksm(int a,int k) {
	int r=1;
	while(k) {
		if(k%2==1) {
			r=a*r%200907;
		}
		a=a*a%200907;
		k=k>>1;
	}
	return r;
}
int main() {
	unsigned long long a,b,c,k;
	int t;
	unsigned long long ans;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
		if((c-b)==(b-a)) {
			ans=(k-1)*(c-b)%200907+a;
			printf("%lld\n",ans%200907);
		} else {
			ans=a*ksm(b/a,k-1)%200907;
			printf("%lld\n",ans);
		}
	}
	return 0;
}/*
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const long long mo = 200907;
int t,a,b,c,k;
long long ksm(long long x,long long k) {
	if (k == 1) return x;
	long long tp = ksm(x,k >> 1) % mo;
	if (k & 1) return tp * tp % mo * x % mo;
	return tp * tp % mo;
}
int main() {
	scanf("%d",&t);
	for (int mi = 1; mi <= t; mi++) {
		scanf("%d%d%d%d",&a,&b,&c,&k);
		if ((c - b) == (b - a)) {
			long long tp = (long long)a + (long long)(k - 1) * (long long)(b - a) % mo;
			printf("%lld\n",tp);
		} else {
			long long tp = (long long)a * ksm(b/a,k - 1) % mo;
			printf("%lld\n",tp);
		}
	}
	return 0;
}*/
