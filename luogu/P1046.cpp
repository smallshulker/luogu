#include<cstdio>
using namespace std;
main()
{
	int a[10],h,c=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&h);
	for(int j=1;j<=10;j++){
		if(a[j]<=(h+30)){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
