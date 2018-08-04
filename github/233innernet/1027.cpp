#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	char m[30000];
	scanf("%s",m);
	int lo=strlen(m);
	int temp=0;
	for(int i=0;i<lo;i++){
		temp*=10;
		temp+=(m[i]-'0');
		temp%=n;
	}
	if(!temp){
		temp=n;
	}
	printf("%d",temp);
	return 0;
}
