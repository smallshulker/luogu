#include<cstdio>
using namespace std;
int a[50];
long long feb(int x){
	for(int i=2;i<=x;i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[x];
}
int main()
{
	int n;
	a[0]=1;
	a[1]=1;
	scanf("%d",&n);
	printf("%lld",feb(n));
	return 0;
}
