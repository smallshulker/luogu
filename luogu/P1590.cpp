#include<cstdio>
using namespace std;

bool pd(int x)
{
	int a;
	while(x){
		a=x%10;
		x/=10;
		if(a==7)return 1;
	}
	return 0;
}
int main()
{
	int m;
	scanf("%d",&m);
	while(m){
		m--;
		int n;
		scanf("%d",&n);
		int sum=n;
		for(int i=n;i>=1;i--){
			if(pd(i))sum--;
		}
		printf("%d\n",sum);
	}
	return 0;
}
