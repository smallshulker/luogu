#include<cstdio>
#include<cstring>
using namespace std;
int main() {
//	freopen("jie.in","r",stdin),freopen("jie.out","w",stdout);
	int n;
	int ans[3000],am[9000];
	scanf("%d",&n);
	memset(ans,0,sizeof(ans));
	memset(am,0,sizeof(am));
	ans[0]=1;
	int lo=1,loa=1;
	for(int i=1; i<=n; i++) {
		for(int j=0; j<lo; j++) {
			ans[j]*=i;
		}
		for(int j=0; j<lo; j++) {
			if(ans[j]>9) {
				ans[j+1]+=ans[j]/10;
				ans[j]%=10;
				if(j==lo-1)lo++;
			}
		}
		for(int j=0; j<lo; j++) {
			am[j]+=ans[j];
			if(am[j]>9) {
				am[j+1]+=am[j]/10;
				am[j]%=10;
				if(j==loa-1)loa++;
			}
			if(lo>loa)loa=lo;
		}
	}
	for(int i=loa-1; i>=0; i--) {
		printf("%d",am[i]);
	}
	return 0;
}
