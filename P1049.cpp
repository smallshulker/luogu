#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int v,n;
	scanf("%d",&v);
	scanf("%d",&n);
	int dp[v+3];
	memset(dp,0,sizeof(dp));
	int w;
	for(int i=1;i<=n;i++){
		scanf("%d",&w);
		for(int j=v;j>=w;j--){
			dp[j]=max(dp[j],dp[j-w]+w);
		}
	}
	printf("%d",v-dp[v]);
	return 0;
}
