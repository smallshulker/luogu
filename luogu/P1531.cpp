#include<cstdio>
#include<iostream>
#include<algorithm>
#define ls now<<1
#define rs now<<1|1
using namespace std;
int tree[200005<<2];
int x[200005];
void build(int now,int l,int r)
{
	if(l==r){
		tree[now]=x[l];
		return;
	}
	int mid=(l+r)>>1;
	build(ls,l,mid);
	build(rs,mid+1,r);
	tree[now]=max(tree[ls],tree[rs]);
}
void update(int loc,int k,int l,int r,int now)
{
	if(l>r)return;
	if(l==r){
		if(l==loc){
			if(tree[now]<k){
				tree[now]=k;
			}
		}
		return;
	}
	int mid=(l+r)>>1;
	if(loc>mid)update(loc,k,mid+1,r,rs);
	else update(loc,k,l,mid,ls);
	tree[now]=max(tree[ls],tree[rs]);
}
int ask(int l,int r,int ll,int rr,int now){
	if(ll>rr||l>rr||r<ll)return 0;
	if(l<=ll&&r>=rr){
		return tree[now];
	}
	int mid=(ll+rr)>>1;
	return max(ask(l,r,ll,mid,ls),ask(l,r,mid+1,rr,rs));
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	build(1,1,n);
	char op;
	int a,b;
//	getchar();
	for(int i=1;i<=m;i++){
		cin>>op>>a>>b;
		
		
		if(op=='Q'){
			printf("%d\n",ask(a,b,1,n,1));
		}
		else{
			update(a,b,1,n,1);
		}
	}
	return 0;
}
