#include<cstdio>
using namespace std;
main()
{
	int i=1,a[100]={0};
	for(;;){
		scanf("%d",&a[i]);
		if(a[i]==0){
			break;
		}
		i+=1;
	}
	for(i;i>0;i--){
		if(a[i]!=0)
		printf("%d ",a[i]);
	}
	return 0;
}
