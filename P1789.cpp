#include<cstdio>
using namespace std;
main()
{
	int n,m,k,x,y;
	scanf("%d %d %d",&n,&m,&k);
	bool a[n+3][n+3]={0};
	int i=1;
	for(i=1;i<=m;i++){
		scanf("%d %d",&x,&y);
		a[x][y]=1;
		a[x-1][y]=1;
		a[x-2][y]=1;
		a[x+2][y]=1;
		a[x+1][y]=1;
		a[x-1][y-1]=1;
		a[x-1][y+1]=1;
		a[x][y-2]=1;
		a[x][y-1]=1;
		a[x][y+1]=1;
		a[x][y+2]=1;
		a[x+1][y-1]=1;
		a[x+1][y+1]=1;
	}
	i=1;
	while(i<=m&&k){
		scanf("%d %d",&x,&y);
		a[x][y]=1;
		a[x-1][y]=1;
		a[x-1][y-1]=1;
		a[x-1][y-2]=1;
		a[x-1][y+1]=1;
		a[x-1][y+2]=1;
		a[x-2][y]=1;
		a[x+2][y]=1;
		a[x+1][y]=1;
		a[x+1][y-1]=1;
		a[x+1][y+1]=1;
		a[x][y-2]=1;
		a[x][y-1]=1;
		a[x][y+1]=1;
		a[x][y+2]=1;
		a[x-2][y-2]=1;
		a[x-2][y-1]=1;
		a[x-2][y+1]=1;
		a[x-2][y+2]=1;
		a[x+1][y-2]=1;
		a[x+1][y+2]=1;
		a[x+2][y-2]=1;
		a[x+2][y-1]=1;
		a[x+2][y+1]=1;
		a[x+2][y+2]=1;
		++i;
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==0)sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
