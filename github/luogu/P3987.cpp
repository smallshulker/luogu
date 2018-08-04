#include<cstdio>
using namespace std;
main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int a[100001]={0};
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int o,m1,n1,x;
	for(int i=1;i<=m;i++){
		scanf("%d",&o);
		if(o==1){
			scanf("%d %d %d",&n1,&m1,&x); 
			for(int j=n1;j<=m1;j++){
				if(a[j]%x==0){
					a[j]/=x;
				}
			}
		}
		if(o==2){
			int sum=0;
			scanf("%d %d",&n1,&m1);
			for(int j=n1;j<=m1;j++){
				sum+=a[j];
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}
