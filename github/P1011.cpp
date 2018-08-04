#include<cstdio>
using namespace std;
int f[]
int main()
{
	fib();
	int a,n,m,x;
	int ans=0;
	int last1,last2=0;
	scanf("%d %d %d %d",&a,&n,&m,&x);
	ans=a;
	last1=a;
	last2=a;
	for(int i=3;i<=x;i++){
		ans+=last2;
	}
	printf("%d",ans);
	return 0;
}
