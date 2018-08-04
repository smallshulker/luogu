#include<cstdio>
#include<cstring>
using namespace std;
long long tree[500005],n;
int lowbit(int x)
{
	return x&(-x);
}
long long asum(int x)
{
	long long ans=0;
	while(x) {
		ans+=tree[x];
		x-=lowbit(x);
	}
	return ans;
}
void change(int lo,int k)
{
	while(lo<=n){
		tree[lo]+=k;
		lo+=lowbit(lo);
	}
}
int main()
{
	int k,m;
	scanf("%lld",&n);
	scanf("%d",&m);
	memset(tree,0,sizeof(tree));
	for(int i=1; i<=n; i++) {
		scanf("%d",&k);
		change(i,k);
	}
	int l,r;
	for(int i=1;i<=m;i++){
		scanf("%d %d %d",&k,&l,&r);
		if(k==2){
			printf("%lld\n",asum(r)-asum(l-1));
		}
		if(k==1){
			change(l,r);
		}
	}
	return 0;
}
