//O2Í¨¹ý
#include<cstdio>
#include<algorithm>
#define ls now<<1
#define rs now<<1|1
using namespace std;
const int MAXN=2000005;
const int inf=2147483647;
int treemin[MAXN<<2];
int a[MAXN];
void buildmin(int l,int r,int now) {
	if(l==r) {
		treemin[now]=a[l];
		return;
	}
	int mid=(l+r)>>1;
	buildmin(l,mid,ls);
	buildmin(mid+1,r,rs);
	treemin[now]=min(treemin[ls],treemin[rs]);
}
long long querymin(int l,int r,int ll,int rr,int now) {
	if(l>rr||r<ll)return inf;
	if(l<=ll&&r>=rr) {
		return treemin[now];
	}
	int mid=(ll+rr)>>1;
	return min(querymin(l,r,ll,mid,ls),querymin(l,r,mid+1,rr,rs));
}
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++) {
		scanf("%d",a+i);
	}
	buildmin(1,n,1);
	for(int i=1; i<=n; i++) {
		if(i==1) {
			printf("0\n");
			continue;
		}
		if(i<m) {
			printf("%d\n",querymin(1,i-1,1,n,1));
		} else
			printf("%d\n",querymin(i-m,i-1,1,n,1));
	}
	return 0;
}
