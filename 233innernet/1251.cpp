#include<cstdio>
#include<iostream>
using namespace std;
int bcj[100005];
int dis[100005];
int getfa(int x)
{
	return x == bcj[x] ? x : bcj[x] = getfa(bcj[x]);
}
/*int getfa(int x)
{
	if(bcj[x]==x)return x;
	else{
		int fa=getfa(bcj[x]);
		return fa;
	}
}*/
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		bcj[i]=i;
		dis[i]=1;
	}
	char op;
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>op;
		if(op=='M'){
			scanf("%d %d",&a,&b);
			int pa = getfa(a), pb = getfa(b);
			if(pa == pb) continue;
			bcj[pa]=pb;
			dis[pb] += dis[pa];
		}
		if(op=='Q'){
			scanf("%d",&a);
			printf("%d\n",dis[getfa(a)]);
		}
	}
	return 0;
}
