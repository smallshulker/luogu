#include<cstdio>
#include<cstring>
using namespace std;
int tree[1005],n;
int lowbit(int x)
{
	return x&(-x);
}
void change(int loc,int k)
{
	while(loc<=n){
		tree[loc]+=k;
		loc+=lowbit(loc);
	}
}
int ask(int loc)
{
	int ans=0;
	while(loc>0){
		ans+=tree[loc];
		loc-=lowbit(loc);
	}
	return ans;
}
int main()
{
	scanf("%d",&n);
	int ans=0;
	int a;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		change(a,1);
		ans+=ask(n)-ask(a);
	}
	printf("%d",ans);
	return 0;
}
