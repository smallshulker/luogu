#include<cstdio>
#include<cstring>
int main() {
	int k,n;
	scanf("%d %d",&k,&n);
	long long a[1005];
	int cnt=0,temp=1;
	int q = 0;
	memset(a,0,sizeof(a));
	while(1) {
		for(int i=1; i<=(1<<q); ++i) {
			a[++cnt] =(long long)a[cnt-(1<<q)]+temp;
			if(cnt == n) {
				printf("%lld",a[cnt]);
				return 0;
			}
		}
		q++;
		temp*=k;
	}
}
