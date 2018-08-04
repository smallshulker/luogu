#include<cstdio>
using namespace std;
int a[50];
long long feb(int n)
{
	for(int i=4;i<=n;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	return a[n];
}
int main()
{
	int n;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	scanf("%d",&n);
	printf("%lld",feb(n));
	return 0;
}
