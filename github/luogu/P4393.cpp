#include<cstdio>
#include<algorithm>
using namespace std;
int dp[1000005];
int main()
{
	int n;
	int a[305];
	int all=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		all+=a[i];
	}
	int half=all/2;
	if(all%2==1)half++;
	sort(a+1,a+n+1);
	int maxx=0;
	for(int i=n;i>0;i--){
		for(int j=all;j-a[i]>=0;j--){
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
			if(dp[j] > all/2 && dp[j] - a[i] <= all/2) maxx = max(maxx,dp[j]);
		}
	}
	printf("%d",maxx);
	return 0;
}
