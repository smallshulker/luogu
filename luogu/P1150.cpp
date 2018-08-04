#include<cstdio>
using namespace std;
main()
{
	int k,a,b,sum=0;
	scanf("%d %d",&a,&b);
	sum=a;
	while(a>=b){
		k=a/b;
		a-=b*k;
		a+=k;
		sum+=k;
	}
	printf("%d",sum);
	return 0;
}
