#include<cstdio>
using namespace std;
void cf(int n,int m)
{
	if(n==0)return;
	cf(n/m,m);
	int c=n%m;
	if(c<10)printf("%d",c);
	else{
		printf("%c",'A'+c-10);
	}
}
int main()
{
	int n;
	int m;
	scanf("%d %d",&n,&m);
	cf(n,m);
	return 0;
}
