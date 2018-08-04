#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,v;
	scanf("%d%d",&n,&v);
	long long dp[v+3];
	int a;
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		for(int j=a;j<=v;j++){
			dp[j]+=dp[j-a];
		}
	}
	printf("%lld",dp[v]);
	return 0;
}
