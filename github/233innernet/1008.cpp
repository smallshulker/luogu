#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int m,i=0;
	scanf("%d",&m);
	while(m>=1){
		int a=m%2;
		if(a){
			int b=pow(2,i);
			printf("%d:%d\n",i,b);
		}
		else{
			printf("%d:0\n",i);
		}
		i++;
		m>>=1;
	}
	return 0;
}
