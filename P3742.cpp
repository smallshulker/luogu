#include<cstdio>
using namespace std;
main()
{
	int n;
	bool b=0;
	char x[102],y[102],z[102];
	scanf("%d",&n);
	scanf("%s",x);
	scanf("%s",z);
	for(int i=0;i<=n-1;i++){
		if(z[i]>x[i]){
			printf("-1");
			b=1;
			break;
		}
		else{
			if(z[i]==x[i]){
				y[i]='z';
			}
			else{
				y[i]=z[i];
			}
		}
	}
	if(b==0){
		printf("%s",y);
	}
	return 0;
}
