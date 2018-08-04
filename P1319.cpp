#include<cstdio>
using namespace std;
main()
{
	int n,a,h=0;
	bool sc=1;
	scanf("%d",&n);
	for(int i=1;i<=n*n;){
		scanf("%d",&a);
		i+=a;
		sc=!sc;
		for(int j=1;j<=a;j++){
			h++;
			printf("%d",sc);
			if(h % n == 0)printf("\n");
		}
	}
	return 0;
}
