#include<cstdio>
#include<cstring>
int max(int a,int b){
	return a<b? b:a;
}
const int MAXN=100005;
int main() {
	int n;
	int a;
	int b[22];
	memset(b,0,sizeof(b));
	int f[MAXN];
	scanf("%d",&n);
	int p=1;
	int ans=0;
	for(int i=1; i<=n; i++) {
		scanf("%d",&a);
		p=1;
		while(a) {
			if(a%2==1)
				b[p]++;
			p++;
			a>>=1;
		}
		for(int j=1;j<=20;j++){
			f[i]=max(b[j],f[i]);
			ans=max(ans,f[i]);
		}
	}
	printf("%d",ans);
	return 0;
}
