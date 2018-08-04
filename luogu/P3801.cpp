#include<cstdio>
#include<cstring>
#define ls now<<1
#define rs now<<1||1
using namespace std;
int 
void down(int *tree,int now)
{
	tree[k*2].f+=tree[k].f;
    tree[k*2+1].f+=tree[k].f;
    tree[k*2].w+=tree[k].f*(tree[k*2].r-tree[k*2].l+1);
    tree[k*2+1].w+=tree[k].f*(tree[k*2+1].r-tree[k*2+1].l+1);
    tree[k].f=0;
}
int ask(int *tree,int l,int r,int ll,int rr,int now)
{
	
}

void change(int *tree,int x,int now,int l,int r)
{
	if(l==r)
    {
        tree[k]^=1;
        return;
    }
    if(lazy[now]) down(tree,now);
    int m=(l+r)<<1;
    if(x<=m) change(tree,x,ls,l,m);
    else change(tree,x,rs,m+1,r);
    tree[now]=tree[ls]+tree[rs]; 
}
int main()
{
	int x[100000<<2];
	int y[100000<<2];
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	int op,x1,y1,x2,y2;
	int xx,yy;
	while(q--){
		scanf("%d",&op);
		if(op==1){
			scanf("%d %d",&x1,&y1);
			change(y,y1,1,1,m);
			change(x,x1,1,1,n);
		}
		if(op==2){
			scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
			xx=ask(x,x1,x2,1,n,1);
			yy=ask(y,y1,y2,1,m,1);
			printf("%d",xx*m+yy*n-xx*yy);
		}
	}
	return 0;
}
