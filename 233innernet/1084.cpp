#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int to[15][15];
	scanf("%d",&n);
	memset(to,0,sizeof(to));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&to[i][j]);
		}
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			to[i][j]+=max(to[i+1][j],to[i+1][j+1]);
		}
	}
	printf("max=%d",to[1][1]);
	return 0;
}
