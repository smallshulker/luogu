#include<cstdio>
using namespace std;
int main()
{
	int pet[10005][5];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d %d",&pet[i][1],&pet[i][2],&pet[i][3],&pet[i][4]);
	}
	int x,y;
	scanf("%d %d",&x,&y);
	for(int i=n;i>=1;i--){
		if(x>=pet[i][1]&&x<=pet[i][1]+pet[i][3]&&y>=pet[i][2]&&y<=pet[i][2]+pet[i][4]){
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
