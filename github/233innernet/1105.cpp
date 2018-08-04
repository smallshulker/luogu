#include<cstdio>
#include<cstring>
int vis[4005];
void print(int n)
{
	if(vis[n]==n){
		printf("%d\n",n);
		return;
	}
	print(vis[n]);
	printf("%d\n",n);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[4005];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int dp[4005];
	for(int i=1;i<=n;i++){
		dp[i]=1;
		vis[i]=i;
		for(int j=1;j<=i;j++){
			if(a[j]>a[i]){
				if(dp[i]<dp[j]+1){
					dp[i]=dp[j]+1;
					vis[i]=j;
				}
			}
		}
	}
	printf("%d\n",dp[n]);
	print(n);
	return 0;
}
