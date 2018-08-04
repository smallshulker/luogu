#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
int map[160][160];
int ax[5]= {1,-1,0,0},ay[5]= {0,0,1,-1};
queue<int>x;
queue<int>y;
int m,n;
int ans=0;
int xx,yy;
int xxx,yyy;
void bfs() {
	while(!x.empty()) {
		xx=x.front();
		yy=y.front();
		x.pop();
		y.pop();
		for(int i=0; i<=3; i++) {
			xxx=xx+ax[i];
			yyy=yy+ay[i];
			if(xxx<=n&&yyy<=m&&&xxx>0&&yyy>0&&map[xxx][yyy]!=0) {
				x.push(xxx);
				y.push(yyy);
			}
			map[xxx][yyy]=0;
		}
	}
	ans++;
}
int main() {
	memset(map,0,sizeof(map));
	scanf("%d %d",&m,&n);
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			scanf("%1d",&map[j][i]);
		}
	}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			if(map[j][i]) {
				x.push(j);
				y.push(i);
				map[j][i]=0;
				bfs();
			}

		}
	}
	printf("%d",ans);
	return 0;
}
