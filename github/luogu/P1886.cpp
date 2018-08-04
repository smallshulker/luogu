//O2Í¨¹ý 
#include<cstdio>
#include<algorithm>
#define ls now<<1
#define rs now<<1|1
using namespace std;
const int MAXN=1000005;
const int inf=2147483647;
int treemax[MAXN<<2],treemin[MAXN<<2];
int a[MAXN];
void buildmax(int l,int r,int now)
{
	if(l==r){
		treemax[now]=a[l];
		return;
	}
	int mid=(l+r)>>1;
	buildmax(l,mid,ls);
	buildmax(mid+1,r,rs);
	treemax[now]=max(treemax[ls],treemax[rs]);
}
void buildmin(int l,int r,int now)
{
	if(l==r){
		treemin[now]=a[l];
		return;
	}
	int mid=(l+r)>>1;
	buildmin(l,mid,ls);
	buildmin(mid+1,r,rs);
	treemin[now]=min(treemin[ls],treemin[rs]);
}
long long querymax(int l,int r,int ll,int rr,int now)
{
	if(l>rr||r<ll)return -inf;
	if(l<=ll&&r>=rr){
		return treemax[now];
	}
	int mid=(ll+rr)>>1;
	return max(querymax(l,r,ll,mid,ls),querymax(l,r,mid+1,rr,rs));
}
long long querymin(int l,int r,int ll,int rr,int now)
{
	if(l>rr||r<ll)return inf;
	if(l<=ll&&r>=rr){
		return treemin[now];
	}
	int mid=(ll+rr)>>1;
	return min(querymin(l,r,ll,mid,ls),querymin(l,r,mid+1,rr,rs));
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
	}
	buildmax(1,n,1);
	buildmin(1,n,1);
	for(int i=k;i<=n;i++){
		printf("%d ",querymin(i-k+1,i,1,n,1));
	}
	puts("");
	for(int i=k;i<=n;i++){
		printf("%d ",querymax(i-k+1,i,1,n,1));
	}
	return 0;
}
