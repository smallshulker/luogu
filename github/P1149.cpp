#include<cstdio>
using namespace std;
int main()
{
	int sum=0;
	int f[30005]={0};
	f[0]=6;
	f[1]=2;
	f[2]=5;
	f[3]=5;
	f[4]=4;
	f[5]=5;
	f[6]=6;
	f[7]=3;
	f[8]=7;
	f[9]=6;
	int n;
	scanf("%d",&n);
	for(int i=10;i<=30000;i++){
		int t=i;
		while(t){
			f[i]+=f[t%10];
			t/=10;
		}
	}
	int tot=0;
	for(int i=0;i<=11111;i++){
		for(int j=0;j<=11111;j++){
			sum=f[i]+f[j]+f[i+j]+4;
			if(sum==n)tot++;
			
		}
	}
	printf("%d",tot);
	return 0;
}
