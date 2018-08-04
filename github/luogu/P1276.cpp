#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int l,n;
	int a[10000],op,x,y,sum=0,sumk=0;
	memset(a,1,sizeof(int)*10000);
	scanf("%d %d",&l,&n);
	l--;
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",&op,&x,&y);
		if(op){
			for(int j=x;j<=y;j++){
				if(a[j]==0){
					a[j]=2;
					sum++;
				}
			}
		}
		else{
			for(int j=x;j<=y;j++){
				if(a[j]==2){
					sum--;
					sumk++;
				}
				a[j]=0;
			}
		}
	}
	printf("%d\n%d",sum,sumk);
	return 0;
}
