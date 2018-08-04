#include<cstdio>
#include<cstring>
using namespace std;
long long  xds[100005<<2];
long long lazy[100005<<2];
long long lazyc[100005<<2];
int a[100005];
int p;
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
    lazyc[t]=1;
}

void pushdown(int now,int l,int mid,int r)
{
    xds[now*2]=(xds[now*2]*lazyc[now]+lazy[now]*(mid-l+1))%p;
    xds[now*2+1]=(xds[now*2+1]*lazyc[now]+lazy[now]*(r-mid))%p;
    lazyc[now*2]=(lazyc[now*2]*lazyc[now])%p;
    lazyc[now*2+1]=(lazyc[now*2+1]*lazyc[now])%p;
    lazy[now*2]=(lazy[now*2]*lazyc[now]+lazy[now])%p;
    lazy[now*2+1]=(lazy[now*2+1]*lazyc[now]+lazy[now])%p;
    lazyc[now]=1;
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

void qjgc(int l,int r,int k,int now,int ll,int rr)
{
	if(l>rr||r<ll)return;
	if(l<=ll&&r>=rr){
		xds[now]=(xds[now]*k)%p;
        lazyc[now]=(lazyc[now]*k)%p;
        lazy[now]=(lazy[now]*k)%p;
		return;
	}
	int mid=rr+ll>>1;
	pushdown(now,ll,mid,rr);
	qjgc(l,r,k,now<<1,ll,mid);
	qjgc(l,r,k,now<<1|1,mid+1,rr);
	xds[now]=xds[now<<1]+xds[now<<1|1];
	return;
}
		
int main()
{
    memset(lazy,0,sizeof(lazy));
    int n,m;
    scanf("%d %d %d",&n,&m,&p);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    build(1,n,1);
    int op,x,y,k;
    while(m--){
        scanf("%d",&op);
        if(op==1){
        	scanf("%d %d %d",&x,&y,&k);
        	qjgc(x,y,k,1,1,n);
        }
        if(op==2){
            scanf("%d %d %d",&x,&y,&k);
            qjg(x,y,k,1,1,n);
        }
        if(op==3){
            scanf("%d %d",&x,&y);
            printf("%lld\n",qjc(x,y,1,1,n)%p);
        }
    }
    return 0;
}
