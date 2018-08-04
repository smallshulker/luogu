#include<cstdio>
#include<cmath>
int ksm(int x,int y) {
	if (y == 1) return x;
	int tp = ksm(x,y >> 1);
	if (y & 1) return tp * tp * x;
	return tp * tp;
}
bool pd(long long x) {
	double mid=sqrt(x);
	for(int i=2; i<=mid; i++) {
		if(x%i==0)return 0;
	}
	return 1;
}
int main() {
	long long p;
	scanf("%lld",&p);
	if(p>1)
		printf(pd(ksm(2,p)-1)&&pd(p)?"Yes":"No");
	if(p==1) {
		printf("No");
	}
	return 0;
}
