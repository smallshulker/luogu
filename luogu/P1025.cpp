#include<cstdio>
#include<algorithm>
using namespace std;
int n,k;
int ans=0;
void dfs(int loc,int last,int sum)
{
	if(loc==k+1){
		if(sum==n)
		ans++;
		return;
	}
	for(int i=last;i<=n;i++){
		dfs(loc+1,i,sum+i);
	}
}
int main()
{
	scanf("%d %d",&n,&k);
	dfs(0,0,0);
	printf("%d",ans);
	return 0;
}
