#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1005],b[1005],c[1005],f[90][90];
int main () {
	int i,j,n,m,k,t,s,l,ma;
	scanf("%d%d%d",&n,&m,&k);
	memset(f,1000001,sizeof(f));
	f[0][0]=0;
	for (i=1; i<=k; i++)
		scanf("%d%d%d",a+i,b+i,c+i);
	for (i=1; i<=k; i++)
		for (j=n; j>=0; j--)
			for (l=m; l>=0; l--) {
				t=j+a[i];
				s=l+b[i];
				t=min(n,t);
				s=min(m,s);
				if (f[t][s]>f[j][l]+c[i]) f[t][s]=f[j][l]+c[i];
			}
	printf("%d",f[n][m]);
}

