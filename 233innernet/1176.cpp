#include<cstdio>
#include<cstring>
using namespace std;
int map[30005][30005];
int main()
{
	int cnt=1;
	int n;
	scanf("%d",&n);
	int flag=1;
	int x=1,y=1;
	memset(map,0,sizeof(map));
	while(cnt<n*n){
		map[x][y]=cnt++;
		if((map[x+1][y]||x+1>n)&&flag==1){
			flag=2;
			y++;
		}
		if(flag==1){
			x++;
		}
		if((map[x][y+1]||y+1>n)&&flag==2){
			flag=3;
			x--;
		}
		if(flag==2){
			y++;
		}
		if((map[x-1][y]||x-1>0)&&flag==3){
			flag=4;
			y--;
		}
		if(flag==3){
			x--;
		}
		if((map[x][y-1]||y-1>0)&&flag==4){
			flag=1;
			x++;
		}
		if(flag==4){
			y--;
		}
	}
	scanf("%d %d",&x,&y);
	printf("%d",map[x][y]);
	return 0;
}
