#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char s[55];
	scanf("%d",&n);
	n%=26;
	scanf("%s",s);
	int lo=strlen(s)-1;
	for(int i=0;i<=lo;i++){
		s[i]+=n;
		if(s[i]>'z'||s[i]<'a')s[i]-=26;
	}
	printf("%s",s);
	return 0;
}
