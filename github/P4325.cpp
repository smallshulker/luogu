#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	bool pd[44];
	memset(pd,0,sizeof(pd));
	int cnt=0;
	int a;
	while(scanf("%d",&a)!=EOF){
		if(!pd[a%42])cnt++,pd[a%42]=1;
	}
	printf("%d",cnt);
	return 0;
}
