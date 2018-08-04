#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	int dp[1005];
	int w,c;
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		scanf("%d %d",&w,&c);
		for(int j=m;j-w>=0;j--){
			dp[j]=max(dp[j],dp[j-w]+c);
		}
	}
	printf("%d",dp[m]);
	return 0;
}
