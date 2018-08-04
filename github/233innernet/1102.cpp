#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int t,m;
	scanf("%d %d",&t,&m);
	int dp[1005];
	memset(dp,0,sizeof(dp));
	int w,v;
	for(int i=1;i<=m;i++){
		scanf("%d %d",&w,&v);
		for(int j=t;j-w>=0;j--){
			dp[j]=max(dp[j],dp[j-w]+v);
		}
	}
	printf("%d",dp[t]);
	return 0;
}
