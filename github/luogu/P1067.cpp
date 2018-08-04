#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,a[105];
	scanf("%d",&n);
	for(int i=n;i>=0;i--){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=0;i--){
		if(!a[i])continue;
		if(i!=n){
			if(a[i]>0){
				printf("+");
			}
			else{
				printf("-");
			}
		}
		if(abs(a[i])!=1||i==0){
			printf("%d",abs(a[i]));
		}
		if(i==1){
			printf("x");
		}
		if(i>1){
			printf("x^%d",i);
		}
	}
	return 0;
}
