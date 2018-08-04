#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
inline int read() {
    int as = 0,fu = 1;
    char c = getchar();
    while(c < '0' || c > '9') {
        c == '-' ? fu = -1 : 0;
        c = getchar();
    }
    while(c >= '0' && c <= '9') {
        as = as * 10 + c - '0';
        c = getchar();
    }
    return as * fu;
}
struct query{
	int l,r,id;
	int block;
}q[200015];
bool cmp(query a,query b)
{
	if(a.block<b.block)
	return 1;
	else{
		if(a.r<b.r){
			return 1;
		}
	}
	return 0;
}
int a[50013];
int cnt[1000015];
int anss[200015];
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
	}
	int fk=sqrt(n);
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d %d",&q[i].l,&q[i].r);
		q[i].block=q[i].l/fk+1;
		q[i].id=i;
	}
	sort(q+1,q+m+1,cmp);
	int l=1,r=0;
	int ans=0;
	for(int i=1;i<=m;i++){
		while(r<q[i].r){
			r++;
			if(!cnt[a[r]])ans++;
			cnt[a[r]]++;
		}
		while(l<q[i].l){
			cnt[a[l]]--;
			if(!cnt[a[l]])ans--;
			l++;
		}
		while(r>q[i].r){
			cnt[a[r]]--;
			if(!cnt[a[r]])ans--;
			r--;
		}
		while(l>q[i].l){
			l--;
			cnt[a[l]]++;
			if(cnt[a[l]]==1)ans++;
		}
		anss[q[i].id]=ans;
	}
	for(int i=1;i<=m;i++){
		printf("%d\n",anss[i]);
	}
	return 0;
}
