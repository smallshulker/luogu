#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	int n,q;
	scanf("%d %d",&n,&q);
	int st[10005][30];
	for(int i=1; i<=n; i++) {
		scanf("%d",&st[i][0]);
	}
	int LOG=log2(n);
	for(int i=1; i<=LOG; i++) {
		for(int j=1; j+(1<<i)-1<=n; j++) {
			st[j][i]=max(st[j][i-1],st[j+(1<<i-1)][i-1]);
		}
	}
	int l,r;
	while(q--) {
		scanf("%d %d",&l,&r);
		LOG=log2(r-l+1);
		printf("%d\n",max(st[l][LOG],st[r+1-(1<<LOG)][LOG]));
	}
	return 0;
}
