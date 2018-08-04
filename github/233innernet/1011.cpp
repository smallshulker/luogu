#include<cstdio>
using namespace std;
int main()
{
	int n,l;
	int a[5005];
	scanf("%d%d",&n,&l);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i]+a[j]==l){
				printf("%d\n%d",i,j);
				return 0;
			}
		}
	}
	printf("0");
	return 0;
}
