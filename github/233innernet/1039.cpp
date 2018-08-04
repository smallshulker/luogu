#include<cstdio>
using namespace std;
int a[55];
long long feb(int n)
{
	for(int i=2;i<=n;i++){
		a[i]+=a[i-1]+a[i-2];
	}
	return a[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	printf("%lld",feb(n));
	return 0;
}
