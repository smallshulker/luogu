#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char c[245];
int n,lo;
int ans=1000000000;
void dfs(int sum,int left,int loc){
	if(lo==loc+left)return;
	if(left==0){
		if(sum<ans){
			ans=sum;
		}
		return;
	}
	dfs(sum*10+c[loc]-'0',left-1,loc+1);
	dfs(sum,left,loc+1);
}
int main()
{
	scanf("%s",c);
	scanf("%d",&n);
	lo=strlen(c);
	dfs(0,strlen(c)-n,0);
	printf("%d",ans);
	return 0;
}
