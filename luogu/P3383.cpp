#include<cstdio>
#include<cstring>
using namespace std;
bool pd[10000015];
int  p[10000015];
void zs(int n) {
	int tot=0;
	for(int i=2; i<=n; i++) {
		if(!pd[i])p[++tot]=i;
		for(int j=1; j<=tot&&i*p[j]<n; j++) {
			pd[i*p[j]]=1;
			if(!i%p[j]) {
				break;
			}
		}
	}
}
int main() {
	int a,n;
	scanf("%d %d",&a,&n);
	memset(pd,0,sizeof(pd));
	memset(p,0,sizeof(p));
	pd[2]=0;
	zs(a+10);
	pd[1]=1;
	for(int i=1; i<=n; i++) {
		scanf("%d",&a);
		if(!pd[a]) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}
