#include<cstdio>
#include<algorithm>
using namespace std;

int gcd(int a,int b)
{
	int r=a%b;
	while(r){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}
	
int main()
{
	long long int a[5];
	scanf("%lld %lld %lld",&a[1],&a[2],&a[3]);
	sort(a+1,a+4);
	int r=gcd(a[1],a[3]);
	printf("%lld/%lld",a[1]/r,a[3]/r);
	return 0;
}
