#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	int dp[205];
	memset(dp,0,sizeof(dp));
	int w,v;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&w,&v);
		for(int j=w;j<=m;j++){
			dp[j]=max(dp[j],dp[j-w]+v);
		}
	}
	printf("max=%d",dp[m]);
	return 0;
}
