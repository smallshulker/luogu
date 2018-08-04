#include<cstdio>
#include<algorithm>
using namespace std;
main()
{
	int a,b,c[10]={0},x;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		x=i;
		while(x!=0){
			c[x%10]++;
			x/=10;
		}
	}
	for(int i=0;i<=9;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
