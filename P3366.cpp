#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
int bcj[5005];
struct edge{
	int x,y,z;
	friend bool operator < (edge a,edge b){
		return a.z>b.z;
	}
}map;
priority_queue<edge> edge_que;
int getfa(int x)
{
	if(bcj[x]==x)return x;
	return bcj[x]=getfa(bcj[x]);
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		bcj[i]=i;
	}
	for(int i=1;i<=m;i++){
		scanf("%d %d %d",&map.x,&map.y,&map.z);
		edge_que.push(map);
	}
	int ans=0;
	edge cache;
	for(int i=1;i<n;){
		cache=edge_que.top();
		if(getfa(cache.x)!=getfa(cache.y)){
			i++;
			ans+=cache.z;
			bcj[getfa(cache.x)]=getfa(cache.y);
		} 
		edge_que.pop();
	}
	printf("%d",ans);
	return 0;
}
