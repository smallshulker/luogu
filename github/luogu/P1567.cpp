#include<cstdio>
using namespace std;
main()
{
	int a,b=-1,n,sum=0,j=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a>=b){
			j++;
		}
		else{
			if(j>sum){
				sum=j;
			}
			j=1;
		}
		b=a;
	}
	printf("%d",sum);
	return 0;
}
