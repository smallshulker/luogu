#include<cstdio>
using namespace std;
main()
{
	int a,b,c,d,h,min;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b>d){
		min=60+d-b;
		h=c-a-1;
	}
	else{
		h=c-a;
		min=d-b;
	}
	printf("%d %d",h,min);
	return 0;
}
