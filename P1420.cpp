#include<cstdio>
using namespace std;
main()
{
	int n,l,a,sum=0,b;
	bool c=0;
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		scanf("%d",&a);
		if(i==n){
			b=a;
		}
		if(!c){
			c=1;
			l=1;
		}
		if(c){
			b++;
			if(b==a){
				l++;
			}
			else{
				if(sum<l){
					sum=l;
				}
				c=0;
				b=a;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
