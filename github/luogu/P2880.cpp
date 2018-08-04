#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
	int st1[50005][20];
	int st2[50005][20];
int main() {
	int n,q;
	int a;
	scanf("%d %d",&n,&q);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a);
		st1[i][0]=st2[i][0]=a;
	}
	int LOG=log2(n);
	for(int i=1; i<=LOG; i++) {
		for(int j=1; j+(1<<i)-1<=n; j++) {
			st1[j][i]=max(st1[j][i-1],st1[j+(1<<i-1)][i-1]);
			st2[j][i]=min(st2[j][i-1],st2[j+(1<<i-1)][i-1]);
		}
	}
	int l,r;
	while(q--) {
		scanf("%d %d",&l,&r);
		LOG=log2(r-l+1);
		printf("%d\n",max(st1[l][LOG],st1[r-(1<<LOG)+1][LOG])-min(st2[l][LOG],st2[r-(1<<LOG)+1][LOG]));
	}
	return 0;
}
