#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int m,t;
	scanf("%d %d",&t,&m);
	int dp[t+5];
	memset(dp,0,sizeof(dp));
	int v;
	int c;
	for(int i=1;i<=m;i++){
		scanf("%d %d",&c,&v);
		for(int j=t;j-c>=0;j--){
			dp[j]=max(dp[j],dp[j-c]+c*v);
		}
	}
	printf("%d",dp[t]);
	return 0;
}
