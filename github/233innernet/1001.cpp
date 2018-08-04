#include<cstdio>
using namespace std;
int main()
{
	int a[9],h,c=0;
	for(int i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&h);
	h+=30;
	for(int j=0;j<=9;j++){
		if(a[j]<=h){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
