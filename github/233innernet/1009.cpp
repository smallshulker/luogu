#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==1){
			printf("%d*3+1=",n);
			n=n*3+1;
			printf("%d\n",n);
		}
		if(n%2==0){
			printf("%d/2=",n);
			n/=2;
			printf("%d\n",n);
		}
	}
	return 0;
}
