#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define inf 0x6ffffff
int pre[15];
void print(int n)
{
	if(n>1)
	print(pre[n]);
	printf("%d ",n);
}
int main()
{
	int n;
	scanf("%d",&n);
	int map[15][15];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&map[i][j]);
			if(map[i][j]==0)map[i][j]=inf;
		}
	}
	int dis[15];
	memset(dis,120,sizeof(dis));
	dis[1]=0;
	pre[1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(dis[j]>dis[i]+map[i][j]){
				pre[j]=i;
				dis[j]=dis[i]+map[i][j];
			}
		}
	}
	printf("minlong=%d\n",dis[n]);
	print(n);
	return 0;
}
