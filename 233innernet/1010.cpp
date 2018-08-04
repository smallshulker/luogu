#include<cstdio>
int main()
{
	int n;
	scanf("%d",&n);
	double ans=0;
	long long p=1;
	for(int i=1;i<=n;i++){
		p*=i;
		ans+=1.0/p*1.0;
	}
	if(n>33){
		ans=1.718281828459046;
	}
	printf("%.15lf",ans);
	return 0;
}
