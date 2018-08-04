#include<cstdio>
#include<algorithm>
using namespace std;
main()
{
	int i,n,h,h_i[20003];
	scanf("%d %d",&n,&h);
	for(i=1;i<=n;i++){
		scanf("%d",&h_i[i]);
	}
	int sum=0,tot=0;
	sort(h_i+1,h_i+n+1);
	for(i=n;i>=1;i--){
		sum+=h_i[i];
		tot++;
		if(sum>=h)break;
	}
	printf("%d",tot);
	return 0;
}
