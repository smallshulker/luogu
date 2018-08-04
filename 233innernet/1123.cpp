#include<cstdio>
using namespace std;
int n,a[15];
void dfs(int loc,int x)
{
	for(int i=x+1;i<=n;i++){
		a[loc]=i;
		dfs(loc+1,i);
		for(int j=1;j<=loc;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
		a[loc]=0;
	}
}
int main()
{
	scanf("%d",&n);
	dfs(1,0);
	return 0;
}
