/*
线段树
1.建树
2.点修改
3.点查询
4.区间修改
5.区间查询 
*/
#include<cstdio>
#include<cstring>
using namespace std;
long long  xds[100005<<2];
long long lazy[100005<<2];
int a[100005];
inline void build(int l,int r,int t)
{
	if(l==r){
		xds[t]=a[l];
		return ;
	}
	int mid=(l+r)>>1;
	build(l,mid,t<<1);
	build(mid+1,r,t<<1|1);
	xds[t]=xds[t<<1]+xds[t<<1|1];
}

void pushdown(int now,int l,int mid,int r)
{
	lazy[now<<1|1]+=lazy[now];
	lazy[now<<1]+=lazy[now];
	xds[now<<1|1]+=lazy[now]*(r-mid);
	xds[now<<1]+=lazy[now]*(mid-l+1);
	lazy[now]=0;
	return;
}

long long qjc(int l,int r,int now,int ll,int rr)
{
	if(l<=ll&&r>=rr){
		return xds[now];
	}
	if(l>rr||r<ll)return 0;
	int mid=(ll+rr)>>1;
	pushdown(now,ll,mid,rr);
	return qjc(l,r,now<<1,ll,mid)+qjc(l,r,now<<1|1,mid+1,rr);
}

void qjg(int l,int r,int k,int now,int ll,int rr)
{
	if(l>rr||r<ll)return;
	if(l<=ll&&r>=rr){
		lazy[now]+=k;
		xds[now]+=k*(rr-ll+1);
		return;
	}
	int mid=(rr+ll)>>1;
	pushdown(now,ll,mid,rr);
	qjg(l,r,k,now<<1,ll,mid);
	qjg(l,r,k,now<<1|1,mid+1,rr);
	xds[now]=xds[now<<1]+xds[now<<1|1];
	return;
}

int main()
{
	memset(lazy,0,sizeof(lazy));
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	build(1,n,1);
	int op,x,y,k;
	while(m--){
		scanf("%d",&op);
		if(op==1){
			scanf("%d %d %d",&x,&y,&k);
			qjg(x,y,k,1,1,n);
		}
		else{
			scanf("%d %d",&x,&y);
			printf("%lld\n",qjc(x,y,1,1,n));
		}
	}
	return 0;
}
/*
5 5
1 5 4 2 3
2 2 4
1 2 3 2
2 3 4
1 1 5 1
2 1 4
*/
