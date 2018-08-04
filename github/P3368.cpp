#include<cstdio>
#include<cstring>
using namespace std;
int a[500005],b[500005],n;
int lowbit(int x)
{
	return x&(-x);
}
void change(int x,int k)
{
	while(x<=n){
		b[x]+=k;
		x+=lowbit(x);
	}
}
int asum(int x)
{
	int ans=0;
	while(x){
		ans+=b[x];
		x-=lowbit(x);
	}
	return ans;
}
int main()
{
	int m,k,y,x,op;
	memset(b,0,sizeof(b));
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		change(i,a[i]-a[i-1]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&op);
		if(op==1){
			scanf("%d %d %d",&x,&y,&k);
			change(x,k);
			change(y+1,-k);
		}
		if(op==2){
			scanf("%d",&x);
			printf("%d\n",asum(x));
		}
	}
	return 0;
}
