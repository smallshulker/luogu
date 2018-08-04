#include<cstdio>
#include<cstring>
using namespace std;
int main() {
	int lastx=1,lasty=1;//x¡–£¨y––
	int n;
	scanf("%d",&n);
	lastx=n/2+1;
	int a[45][45];
	memset(a,0,sizeof(a));
	int last=n*n;
	for(int i=1; i<=last; i++) {
		a[lastx][lasty]=i;
		if(lastx!=n&&lasty==1) {
			lastx++;
			lasty=n;
			continue;
		}
		if(lastx==n&&lasty!=1) {
			lastx=1;
			lasty--;
			continue;
		}
		if(lastx==n&&lasty==1) {
			lasty++;
			continue;
		}
		if(lasty!=1&&lastx!=n) {
			if(!a[lastx+1][lasty-1]) {
				lastx++;
				lasty--;
			} else {
				lasty++;
			}
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
