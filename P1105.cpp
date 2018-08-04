#include<cstdio>
using namespace std;
main()
{
	int n;
	bool a[1003][20005][20005]={0};
	scanf("%d",&n);
	int i,b,c;
	for(int k=1;k<=n;k++){
		scanf("%d %d %d",&i,&b,&c);
		for(int j=b;j<=c;j++){
			a[k][i][j]=1;
		}
	}
	for(int k=1;k<=n;k++){
		
}
