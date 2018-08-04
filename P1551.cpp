#include<cstdio>
using namespace std;
int bcj[100000];
int getfa(int x)
{
	if(x==bcj[x]){
		return x;
	}
	else{
		return bcj[x]=getfa(bcj[x]);
	}
}

int main()
{
	int m,n,p;
	scanf("%d %d %d",&n,&m,&p);
	for(int i=1;i<=n;i++){
		bcj[i]=i;
	}
	int c,d;
	for(int i=1;i<=m;i++){
		scanf("%d %d",&c,&d);
		bcj[getfa(c)]=getfa(d);
	}
	for(int i=1;i<=p;i++){
		scanf("%d %d",&c,&d);
		if(getfa(c)==getfa(d)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
