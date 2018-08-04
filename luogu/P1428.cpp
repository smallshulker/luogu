#include<cstdio>
using namespace std;
main()
{
	int n,a[100]={0},sum[100]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=i;j>=1;j--){
			if(a[i]>a[j]){
				sum[i]++;
			}
		}
	}
	for(int k=1;k<=n;k++){
		printf("%d ",sum[k]);
	}
	return 0;
}
