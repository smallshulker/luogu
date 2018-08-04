#include<cstdio>
#include<cstring>
using namespace std;
int main() {
	int n,a[105];
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	double mark=0,dol=100;
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=n; i++) {
		if(mark<dol/100.0*a[i]) {
			mark=dol/100.0*a[i];
		}
		if(mark*1.0/a[i]*100.0>dol) {
			dol=mark*1.0/a[i]*100.0;
		}
	}
	printf("%.2lf",dol);
	return 0;
}
