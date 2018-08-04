#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int map[1005][1005];
int n,xx,yy;
int _min;
void bfs(int x,int y)
{
	
int main()
{
	memset(map,0,sizeof(map));
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%1d",&map[j][i]);
		}
	}
	int x,y;
	_min=n*n;
	scanf("%d %d %d %d",&x,&y,&xx,&yy);
	map[]
	bfs(x,y,0);
	printf("%d",_min);
	return 0;
}
