#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int dp[20005];
	memset(dp,0,sizeof(dp));
	int n;
	int x[5]={0,150,200,350};
	int v;
	scanf("%d",&v);
	for(int i=1;i<=3;i++){
		for(int j=x[i];j<=v;j++){
			dp[j]=max(dp[j],dp[j-x[i]]+x[i]);
		}
	}
	printf("%d",v-dp[v]);
	return 0;
}
