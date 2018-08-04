#include<cstdio>
using namespace std;
main()
{
	int a[7],b[7],sum[7],out;
	for(int i=1;i<=7;i++){
		scanf("%d%d",&a[i],&b[i]);
		sum[i]=a[i] + b[i];
		if(sum[i]>8){
			out=i;
			break;
		}
	}
	printf("%d",out);
	return 0;
}
