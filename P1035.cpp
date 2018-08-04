#include<cstdio>
using namespace std;
main()
{
	int k;
	double sn=0,n=0;
	scanf("%d",&k);
	for(;;){
		n+=1;
		sn=sn+1/(n*1.0);
		if(sn>k){
			break;
		}
	}
	printf("%.0f",n);
	return 0;
}
