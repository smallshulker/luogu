#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int _max=0,_min=0;
	int n,l;
	scanf("%d",&l);
	scanf("%d",&n);
	int p;
	for(int i=1;i<=n;i++){
		scanf("%d",&p);
		_min=max(_min,min(p,l-p+1));
		_max=max(_max,max(p,l-p+1));
	}
	printf("%d %d",_min,_max);
	return 0;
}
