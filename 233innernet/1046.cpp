#include<cstdio>
long long a,b,c,k;
int main() {
	scanf("%lld",&k);
	a=1,b=1,c=a+b;
	while (c<k) {
		a=b;
		b=c;
		c=a+b;
	}
	printf("m=%lld\nn=%lld\n",a,b);
	return 0;
}
