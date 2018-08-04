#include<cstdio>
using namespace std;
int main()
{
	int m;
	scanf("%d",&m);
	while(m--){
		int n;
		int ans=0,a;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			ans^=a;
		}
		printf(ans?"Yes\n":"No\n");
	}
	return 0;
}
