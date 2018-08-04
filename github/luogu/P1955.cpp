#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int bcj[100005];
struct rela {
	int i,j,e;
};
rela x[100005];
bool cmp1(rela a,rela b) {
	return a.i<b.i;
}
bool cmp2(rela a,rela b) {
	return a.j<b.j;
}
bool cmp3(rela a,rela b) {
	return a.e>b.e;
}
int getfa(int a) {
	if(bcj[a]==a)return a;
	return bcj[a]=getfa(bcj[a]);
}
bool pd(int n) {
	for(int k=1; k<=n; k++) {
		if(x[k].e) {
			bcj[getfa(x[k].i)]=getfa(x[k].j);
		} else {
			if(getfa(x[k].i)==getfa(x[k].j))return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	int n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		memset(x,0,sizeof(x));
		for(int k=1; k<=n; k++) {
			scanf("%d %d %d",&x[k].i,&x[k].j,&x[k].e);
			bcj[k]=k;
		}
		sort(x+1,x+n+1,cmp1);
		int last=0;
		int _new=0;
		for(int k=1; k<=n; k++) {
			if(x[k].i==last) {
				x[k].i=_new;
			} else {
				x[k].i=++_new;
				last=x[k].i;
				for(int kk=1;kk<=n;kk++){
					if(x[kk].j==last){
						x[kk].j=_new;
					}
				}
			}
		}
		sort(x+1,x+n+1,cmp3);
		if(pd(n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

