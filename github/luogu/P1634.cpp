#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int a,b;
	unsigned long long c;
	scanf("%d %d",&a,&b);
	a++;
	c=pow(a,b);
	printf("%lld",c);
	return 0;
}
