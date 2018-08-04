#include<cstdio>
#include<cmath>

using namespace std;
int a[3][105];
bool yuan(int m,int n,int x)
{
	double dis=sqrt(pow((m-a[1][x]),2)*1.0+pow((n-a[2][x]),2)*1.0);
	return dis < a[3][x];
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int x,y,x1,y1,sum=0;
	scanf("%d %d %d %d",&x,&y,&x1,&y1);
		for(int j=n;j>=1;j--){
			if(yuan(x,y,j)^yuan(x1,y1,j))sum++;
		}
	printf("%d",sum);
	return 0;
}
