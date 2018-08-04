#include<cstdio>
#include<cstring>
int lowbit(int x)
{
	return x&(-x);
}
int tree[10005];
int n;
int ask(int x)
{
	int ans=0;
	while(x>0){
		ans+=tree[x];
		x-=lowbit(x);
	}
	return ans;
}
void change(int x,int k)
{
	while(x<=10000){
		tree[x]+=k;
		x+=lowbit(x);
	}
}
int main()
{
	scanf("%d",&n);
	int op,x,k;
	memset(tree,0,sizeof(tree));
	for(int i=1;i<=n;i++){
		scanf("%d",&op);
		if(op==1){
			scanf("%d %d",&x,&k);
			change(x,k);
		}
		if(op==2){
			scanf("%d",&x);
			printf("%d\n",ask(x));
		}
	}
	return 0;
}
