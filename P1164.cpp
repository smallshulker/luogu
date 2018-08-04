#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int sum=0;
int m,n;
int a[105];
void dfs(int loc,int mon)
{
	if(loc>n+1||mon>m)return;
	if(mon==m){
		sum++;
		return;
	}
	dfs(loc+1,mon+a[loc]);
	dfs(loc+1,mon);
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	dfs(1,0);
	printf("%d",sum);
}
