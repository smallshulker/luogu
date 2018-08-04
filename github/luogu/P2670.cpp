#include<cstdio>
using namespace std;
main()
{
	int m,n,b[104][104]={0};
	scanf("%d %d",&n,&m);
	char a[104][104];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%c",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='*')continue;
			else{
				if(a[i-1][j+1]=='*')b[i][j]++;
				if(a[i-1][j-1]=='*')b[i][j]++;
				if(a[i-1][j]=='*')b[i][j]++;
				if(a[i][j-1]=='*')b[i][j]++;
				if(a[i][j+1]=='*')b[i][j]++;
				if(a[i+1][j-1]=='*')b[i][j]++;
				if(a[i+1][j]=='*')b[i][j]++;
				if(a[i+1][j+1]=='*')b[i][j]++;
			}
		}
	}
	for(int i=n;i>=1;i--){
		for(int j=m;j>=1;j--){
			if(a[i][j]=='*')printf("*");
			else printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
