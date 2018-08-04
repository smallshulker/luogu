#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
bool check(int n)
{
	if(n==0||n==1)return 0;
	double a=sqrt(n);
	for(int i=2;i<=a;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	char sword[105];
	int num[27];
	memset(num,0,sizeof(num));
	scanf("%s",sword);
	int lo=strlen(sword);
	for(int i=0;i<lo;i++){
		num[sword[i]-'a']++;
	}
	int _min,_max;
	_max=num[0];
	_min=1000;
	for(int i=1;i<=25;i++){
		if(num[i])
		_min=min(_min,num[i]);
		_max=max(_max,num[i]);
	}
	if(check(_max-_min)){
		printf("Lucky Word\n%d",_max-_min);
	}
	else{
		printf("No Answer\n0");
	}
	return 0;
}
