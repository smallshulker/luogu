#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int m,a[2005];
	scanf("%d",&m);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
	}
	int tt[305];
	int t;
	memset(tt,0,sizeof(tt));
	for(int i=1;i<=m;i++){
		scanf("%d",&t);
		tt[t]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=a[i]-1;j>=1;j--){
			if(tt[j]){
				tt[j]--;
				ans++;
				break;
			}
		}
	}
	printf("%d",m-ans);
	return 0;
}
