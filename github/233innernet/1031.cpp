#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,x;
	int a[30005];
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	int _max=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		a[x]++;
		_max=max(_max,a[x]);
	}
	for(int i=1;i<=30000;i++){
		if(a[i]==_max){
			printf("%d %d\n",i,_max);
		}
	}
	return 0;
}
