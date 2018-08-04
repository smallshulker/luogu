#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int t,m;
	scanf("%d %d",&t,&m);
	int dp[t+5];
	memset(dp,0,sizeof(dp));
	int w,v;
	for(int i=1;i<=m;i++){
		scanf("%d %d",&w,&v);
		for(int j=w;j<=t;j++){
			dp[j]=max(dp[j-w]+v,dp[j]);
		}
	}
	printf("%d",dp[t]);
	return 0;
}

