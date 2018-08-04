#include<cstdio>
using namespace std;
main()
{
	int h1,h2,h,m1,m2,m,s1,s2,s,n;
	unsigned long long sum;
	scanf("%d:%d:%d",&h1,&m1,&s1);
	scanf("%d:%d:%d",&h2,&m2,&s2);
	h=h2-h1;
	m=m2-m1;
	s=s2-s1;
	scanf("%d",&n);
	unsigned long long int time=3600*h+60*m+s;
	sum=n*time;
	printf("%lld",sum);
	return 0;
}
