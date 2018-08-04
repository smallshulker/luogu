#include<cstdio>
#include<algorithm>
using namespace std;
struct node {
	int t;
	int d;
} d[1001];
bool cmp(node a,node b) {
	if(a.d<b.d)return 1;
	if(a.d>b.d)return 0;
	if(a.t<b.t)return 1;
	return 0;
}
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&d[i].d);
		d[i].t=i;
	}
	sort(d+1,d+n+1,cmp);
	double cnt=0,ans=0;
	for(int i=1; i<=n; i++) {
		printf("%d ",d[i].t);
		cnt+=d[i-1].d;
		cnt/=n;
		ans+=cnt;
		cnt*=n;
	}
	printf("\n%.2lf",ans);
	return 0;
}
}
sort(x+1,x+n+1,cmp);
int sum=0;
for(int i=1; i<=n; i++) {
	sum+=x[i].a*(n-i);
	printf("%d ",x[i].loc);
}
printf("\n");
double avg=sum*1.0/n*1.0;
printf("%.2lf",avg);
return 0;
}
