#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
struct edge{
    int next;
    int to;
    int dis;
}map[5000005];
int head[100005];
int num=0;
void addedge(int from,int to,int dis)
{
  map[++num].next=head[from];
  map[num].to=to;
  map[num].dis=dis;
  head[from]=num;
}
long long dis[100005];
bool vis[100005];
int main()
{
    int n,m,s;
    scanf("%d %d",&n,&m);
    int x,y,l;
    memset(map,120,sizeof(map));
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&x,&y,&l);
        addedge(x,y,l);
        addedge(y,x,l);
    }
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++){
        dis[i]=2147483647;
    }
    s=1;
    dis[s]=0;
    queue<int>poi;
    poi.push(s);
    int h,v;
    vis[s]=1;
    while(!poi.empty()){
        h=poi.front();
        poi.pop();
        vis[h]=0;
        for(int i=head[h];i;i=map[i].next){
            v=map[i].to;
            if(dis[v]>dis[h]+map[i].dis){
                dis[v]=dis[h]+map[i].dis;
                if(vis[v]==0){
                    poi.push(v);
                    vis[v]=1;
                }
            }
        }
    }
    printf("%d",dis[n]);
    return 0;
}
