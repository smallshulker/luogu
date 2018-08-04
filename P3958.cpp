#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int bcj[1005];
int ding[1005],di[1005];
int getfa(int x){
	if(x==bcj[x])return x;
	else{return bcj[x]=getfa(bcj[x]);}
}
void slove()
{
	long long n,h,r;
	memset(ding,0,sizeof(ding));
	memset(di,0,sizeof(di));
	scanf("%lld %lld %lld",&n,&h,&r);
	long long x[1005],y[1005],z[1005];
	int tot1=0,tot2=0;
	for(int i=1;i<=n;i++){
		bcj[i]=i;
		scanf("%lld %lld %lld",&x[i],&y[i],&z[i]);
		if(z[i]<=r){
			di[++tot1]=i;
		}
		if(h-z[i]<=r){
			ding[++tot2]=i;
		}
		for(int j=1;j<i;j++){
			if((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i])+(z[j]-z[i])*(z[j]-z[i])<=4*r*r){
				bcj[getfa(i)]=getfa(j);
			}
		}
	}
	for(int i=1;i<=tot1;i++){
		for(int j=1;j<=tot2;j++){
			if(getfa(di[i])==getfa(ding[j])){
				printf("Yes\n");
				return;
			}
		}
	}
	printf("No\n");
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		slove();
	}
	return 0;
}
