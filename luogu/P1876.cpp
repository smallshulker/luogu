#include<cstdio>
using namespace std;
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i*i<=n;i++)printf("%d ",i*i);
	return 0;
}
