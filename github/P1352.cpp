#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int MAXN=6005;
bool y_root[MAXN];
int a[MAXN];
int f[MAXN][2];
vector<int>son[MAXN];
int qread() {
	int num=0,op=1;
	char c = getchar();
	while(c<'0'||c>'9') {
		if(c=='-') op=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9') {
		num=num*10+c-'0';
		c=getchar();
	}
	return op*num;
}
void dfsdp(int cur){
	int ret=0;
	int size=son[cur].size();
	if(size==0){
		f[cur][1]=a[cur];
		return;
	}
	f[cur][1]=a[cur];
	for(int i=0;i<size;i++){
		dfsdp(son[cur][i]);
		f[cur][1]+=f[son[cur][i]][0];
		f[cur][0]+=max(f[son[cur][i]][1],f[son[cur][i]][0]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){
		a[i]=qread();
	}
	int x,y;
	for(int i=1;i<n;i++){
		x=qread();
		y=qread();
		son[y].push_back(x);
		y_root[x]=1;
	}
	int root;
	for(int i=1;i<=n;i++){
		if(!y_root[i]){
			root=i;
			break;
		}
	}
	dfsdp(root);
	printf("%d",max(f[root][0],f[root][1]));
	return 0;
}
