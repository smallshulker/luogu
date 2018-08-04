#include<cstdio>
using namespace std;
int main()
{
	int n,a[105],sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		sum%=10;
	}
	if(sum%2==0){
		printf("Bob");
	}
	else{
		printf("Alice");
	}
	return 0;
}
