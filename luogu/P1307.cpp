#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	long long n,n1=0;
	int c=0;
	bool f=0;
	scanf("%lld",&n);
	if(n<0){
		f=1;
		n=-1*n;
	}
	int a[10]={0};
	for(int i=1;n>0;i++){
		a[i]=n%10;
		n/=10;
		c++;
	}
	for(int j=1;c>=0;j++){
		n1=a[j]*pow(10,c-1)+n1;
		c--;
	}
	if(f==1){
		printf("-%lld\n",n1);
	}
	else{
		printf("%lld\n",n1);
	}
	return 0;
}
