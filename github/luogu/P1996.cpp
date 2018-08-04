#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	bool a[105];
	memset(a,1,105*sizeof(bool));
	int n,h=1,j;
	scanf("%d %d",&n,&j);
	int n1=n;
	for(int i=1;;i++){
		if(!n)break;
		if(a[i]){
			if(h == j){
				h=0;
				a[i]=0;
				n1--;
				printf("%d ",i);
			}
			h++;
		}
		if(n1 == 1)break;
		if(i == n){
			i=0;
		}
		if(a[i] == 0) continue;
	}
	for(int i=1;i<=n;i++){
		if(a[i]) printf("%d",i);
	}
	return 0;
}
