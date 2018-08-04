#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int loc;
	int num;
	int ls;
}a[40005];
int tree[40005],n;
bool cmploc(node a,node b)
{
	return a.loc<b.loc;
}
bool cmpnum(node a,node b)
{
	return a.num<b.num;
}
int lowbit(int x)
{
	return x&(-x);
}
void change(int x,int k)
{
	while(x<=n){
		tree[x]+=k;
		x+=lowbit(x);
	}
}
int asum(int x)
{
	int ans=0;
	while(x){
		ans+=tree[x];
		x-=lowbit(x);
	}
	return ans;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].num);
		a[i].loc=i;
	}
	sort(a+1,a+n+1,cmpnum);
	int _new=1;
	int last=a[1].num;
	a[1].ls=1;
	for(int i=1;i<=n;i++){
		if(a[i].num==last){
			a[i].ls=_new;
			continue;
		}
		last=a[i].num;
		_new++;
		a[i].ls=_new;
	}
	sort(a+1,a+n+1,cmploc);
	int ans=0;
	for(int i=1;i<=n;i++){
		change(a[i].ls,1);
		ans+=i-asum(a[i].ls);
	}
	printf("%d",ans);
	return 0;
}
