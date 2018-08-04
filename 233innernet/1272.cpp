#include<cstdio>
using namespace std;
int main()
{
	double ans=0;
	int s,a,b;
	scanf("%d %d %d",&s,&a,&b);
	ans=(s*2.0)/(a*3.0+b*1.0);
	printf("%.10e",ans);
	return 0;
}
