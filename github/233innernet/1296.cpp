#include<cstdio>
using namespace std;
int main()
{
	int a[200005];
	int n;
	scanf("%d",&n);
	a[0]=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i]){
				printf("%d\n",a[j]);
				break;
			}
		}
	}
	return 0;
}
