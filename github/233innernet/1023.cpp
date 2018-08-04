#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
void cf(long long n,int m)
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
	char num[2000];
	scanf("%d",&n);
	scanf("%s",num);
	char *stop;
	long long x=strtol(num,&stop,n);
	int m;
	scanf("%d",&m);
	cf(x,m);
	return 0;
}
