#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int dp[30005];
	int n,m;
	int v,p;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d %d",&v,&p);
		for(int j=n;j-v>=0;j--){
			dp[j]=max(dp[j],dp[j-v]+v*p);
		}
	}
	printf("%d",dp[n]);
	return 0;
}
