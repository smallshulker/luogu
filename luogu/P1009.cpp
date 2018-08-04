#include<cstdio>
#include<cstring>
int main()
{
	int n;
	scanf("%d",&n);
	int a[163],sum[163];
	memset(a,0,sizeof(a));
	memset(sum,0,sizeof(sum));
	a[162]=1;
	int k=1,w=1;
	while(k<=n){
		for(int i=1;i<=162;i++){
			a[i]*=k;
		}
		for(int i=162;i>=1;i--){
			if(a[i]>=10){
				a[i-1]+=a[i]/10;
				a[i]%=10;
			}
		}
		for(int i=162;i>=1;i--){
			sum[i]+=a[i];
			if(sum[i]>=10){
				sum[i-1]+=sum[i]/10;
				sum[i]%=10;
			}
		}
		k++;
	}
	int i=1;
	while(sum[i]==0){
		i++;
	}
	for(;i<=162;i++){
		printf("%d",sum[i]);
	}
	return 0;
}
