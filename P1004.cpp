#include<cstdio>
#include<cstring>
using namespace std;
int a[11][11];
void print(int n)
{
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int x=1,y=1,z=1;
	int n;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	while(x&&y&&z){
		scanf("%d %d %d",&x,&y,&z);
		a[x][y]=z;
	}
	int ans=0;
	print(n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i-1][j]>a[i][j-1]){
				a[i][j]+=a[i-1][j];
				a[i-1][j]=0;
			}
			else{
				a[i][j]+=a[i][j-1];
				a[i][j-1]=0;
			}
		}
	}
	ans+=a[n][n];
	print(n);
	a[n][n]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i-1][j]>a[i][j-1]){
				a[i][j]+=a[i-1][j];
				a[i-1][j]=0;
			}
			else{
				a[i][j]+=a[i][j-1];
				a[i][j-1]=0;
			}
		}
	}
	print(n);
	ans+=a[n][n];
	printf("%d",ans);
	return 0;
}
