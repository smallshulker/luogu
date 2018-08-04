#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int n;
	double f;
	scanf("%d",&n);
	f=(pow((1+sqrt(5))/2,n) - pow((1-sqrt(5))/2,n) ) / sqrt(5);
	printf("%.2lf",f);
	return 0;
}
