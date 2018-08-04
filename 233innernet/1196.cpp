#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int tree[1000005],n;
int lowbit(int x) {
	return x&(-x);
}
void change(int loc,int k) {
	while(loc<=n) {
		tree[loc]+=k;
		loc+=lowbit(loc);
	}
}
long long ask(int loc) {
	long long ans=0;
	while(loc>0) {
		ans+=tree[loc];
		loc-=lowbit(loc);
	}
	return ans;
}

struct node {
	long long x,loc;
};
node a[1000005];
bool cmp1(node a,node b) {
	return a.x<b.x;
}
bool cmp2(node a,node b) {
	return a.loc<b.loc;
}
int main() {
	scanf("%d",&n);
	long long ans=0;
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i].x);
		a[i].loc=i;
	}

	sort(a+1,a+n+1,cmp1);
	int _new=1;
	int last=a[1].x;
	a[1].x=1;
	for(int i=2; i<=n; i++) {
		if(a[i].x!=last) {
			last=a[i].x;
			a[i].x=++_new;
		} else {
			a[i].x=_new;
		}
	}
	sort(a+1,a+n+1,cmp2);

	for(int i=1; i<=n; i++) {
		change(a[i].x,1);
		ans+=ask(n)-ask(a[i].x);
	}
	printf("%lld",ans);
	return 0;
}
