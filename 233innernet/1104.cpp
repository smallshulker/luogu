#include<cstdio>
#include<cstring>
#include<algorithm>
#define inf 2021161080
using namespace std;
int main()
{
	int a[15];
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	int t;
	scanf("%d",&t);
	int dp[t+5];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=10;i++){
		for(int j=i;j<=t;j++){
			if(!dp[j])dp[j]=inf;
			dp[j]=min(dp[j-i]+a[i],dp[j]);
		}
	}
	printf("%d",dp[t]);
	return 0;
}
