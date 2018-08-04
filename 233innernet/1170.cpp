#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int dp[1005];
	memset(dp,0,sizeof(dp));
	int n;
	int x;
	int v;
	scanf("%d",&n);
	scanf("%d",&v);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		for(int j=v;j-x>=0;j--){
			dp[j]=max(dp[j],dp[j-x]+x);
		}
	}
	printf("%d",dp[v]);
	return 0;
}
