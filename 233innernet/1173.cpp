#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int dp[20005];
	memset(dp,0,sizeof(dp));
	int n;
	int x;
	int v;
	scanf("%d",&v);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		for(int j=v;j-x>=0;j--){
			dp[j]=max(dp[j],dp[j-x]+x);
		}
	}
	printf("%d",v-dp[v]);
	return 0;
}
