#include<cstdio>
#include<cmath>
bool pd(int x)
{
	double mid=sqrt(x);
	for(int i=2;i<=mid;i++){
		if(x%i==0)return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	double mid=sqrt(n);
	for(int i=2;i<=mid;i++){
		if(pd(i)&&(n%i==0)&&pd(n/i)){
			printf("It's a MaoLaoDa number.");
			return 0;
		}
	}
	printf("It's not a MaoLaoDa number.");
	return 0;
}
