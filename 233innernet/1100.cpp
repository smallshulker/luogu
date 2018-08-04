#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int dp[10005];
	memset(dp,0,sizeof(dp));
	int p,min;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&p,&min);
		for(int j=min;j<=m;j++){
			dp[j]=max(dp[j],dp[j-min]+p);
		}
	}
	printf("%d",dp[m]);
	return 0;
}
