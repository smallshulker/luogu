#include<cstdio>
#include<cmath>
#include<algorithm>
int st[20][100005];
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&st[0][i]);
	}
	int LOG=log2(n);
	for(int i=1;i<=LOG;i++){
		for(int j=1;(1<<i)+j-1<=n;j++){
			st[i][j]=max(st[i-1][j],st[i-1][j+(1<<i-1)]);
		}
	}
	int l,r;
	while(m--){
		scanf("%d %d",&l,&r);
		LOG=log2(r-l+1);
		printf("%d\n",max(st[LOG][l],st[LOG][r+1-(1<<LOG)]));
	}
	return 0;
}
/*
8 8
9 3 1 7 5 6 0 8
1 6
1 5
2 7
2 6
1 8
4 8
3 7
1 8
*/
