#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[105];
	int sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sum/=n;
	for(int i=1;i<=n;i++){
		a[i]-=sum;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0)continue;
		a[i+1]+=a[i];
		a[i]=0;
		ans++;
	}
	printf("%d",ans);
	return 0;
}
