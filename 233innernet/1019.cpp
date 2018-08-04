#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=50000;i++){
		ans=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				ans++;
			}
		}
		if(ans==n){
			printf("%d",i);
			return 0;
		}
	}
}
