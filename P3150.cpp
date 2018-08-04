#include<cstdio>
using namespace std;
main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a%2==0){
			printf("pb wins\n");
		}
		else{
			printf("zs wins\n");
		}
	}
	return 0;
}
	
