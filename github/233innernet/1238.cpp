#include<cstdio>
#include<algorithm>
using namespace std;
int map[2005][2005];
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&m);
			map[i][j]=m;
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
			}
		}
	}
	scanf("%d",&m);
	int l,r;
	while(m--){
		scanf("%d %d",&l,&r);
		printf("%d\n",map[l][r]);
	}
	return 0;
}
