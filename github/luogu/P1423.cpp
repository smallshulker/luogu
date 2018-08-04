#include<cstdio>
using namespace std;
main()
{
	double a,i=1;
	int b=0;
	scanf("%lf",&a);
	while(a>=0){
		 a=a-2*i;
		 i=i*0.98;
		 b+=1;
	}
	printf("%d",b); 
	return 0;
}
