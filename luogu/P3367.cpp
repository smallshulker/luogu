#include<cstdio>
using namespace std;
int bcj[200005];
int getfa(int x){
	if(x==bcj[x])return x;
	return bcj[x]=getfa(bcj[x]);
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a,b,c;
	for(int i=1;i<=n;i++){
		bcj[i]=i;
	}
	while(m){
		scanf("%d %d %d",&a,&b,&c);
		if(a==1){
			bcj[getfa(b)]=getfa(c);
		}
		if(a==2){
			if(getfa(b)==getfa(c)){
				printf("Y\n");
			}
			else{
				printf("N\n");
			}
		}
		m--;
	}
	return 0;
}
