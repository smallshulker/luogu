#include<cstdio>
#include<cmath>
void fj(int x,bool flag)
{
	if(x==1)return;
	for(int i=2;i<=x;i++){
		if(x%i==0){
			if(flag)printf("*");
			printf("%d",i);
			fj(x/i,1);
			return;
		}
	}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		fj(n,0);
		printf("\n");
	}
	return 0;
}
