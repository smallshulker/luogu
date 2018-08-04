#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int a[105];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
	}
	sort(a+1,a+n+1);
	int a1=0,a2=0;
	for(int i=n;i>=1;i--){
		if(abs(a1+a[i]-a2)<=abs(a1-a2)){
			a1+=a[i];
		}
		else{
			a2+=a[i];
		}
	}
	if(a1>a2){
		swap(a1,a2);
	}
	printf("%d %d",a1,a2);
	return 0;
}
