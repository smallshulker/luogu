#include<cstdio>
using namespace std;
int main()
{
	int n,x;
	scanf("%d",&n);
	bool a[1005]={0};
	int ans=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(!a[x]){
			ans++;
		}
		a[x]=1;
	}
	printf("%d\n",ans);
	for(int i=1;i<=1000;i++){
		if(a[i])
		printf("%d ",i);
	}
	return 0;
}
