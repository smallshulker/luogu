#include<cstdio>
using namespace std;
double ai[100005];
int main()
{
	int n;
	scanf("%d %lf",&n,&ai[0]);
	int a,r;
	int lastr=0;
	double all=0;
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&r);
		a=a*5;
		for(int j=lastr;j<=r;j++){
			all+=ai[j];
			ai[j]=0;
		}
		if(all<a){
			printf("-1");
			return 0;
		}
		all-=a;
		ai[r]=all;
		all=0;
		ai[i]=a/5;
		lastr=r;
	}
	double ans=0;
	for(int i=0;i<=n;i++){
		ans+=ai[i];
	}
	printf("%lf",ans/5.0);
	return 0;
}
