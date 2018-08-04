#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	char num[2000];
	scanf("%d",&n);
	scanf("%s",num);
	char *stop;
	printf("%ld",strtol(num,&stop,n));
	return 0;
}
