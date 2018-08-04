#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	int a,lo=0;
	char c[1005];
	scanf("%d ",&a);
	scanf("%s",c);
	for(int i=0;i<=lo;i++){
		if(c[i]>='0'&&c[i]<='9')
			lo++;
	}
	lo--;
	for(int i=0;i<=lo;i++){
		if(c[i]>='1'&&c[i]<='9'){
			if(i!=0)printf("+");
			printf("%c*%d^%d",c[i],a,lo-i);
		}
	}
	return 0;
}
