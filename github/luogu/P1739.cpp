#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int zuo=0;
	char c;
	cin>>c;
	bool b=1;
	while(c!='@'){
		if(c=='(')zuo++;
		if(c==')')zuo--;
		if(zuo<0){
			b=0;
			break;
		}
		cin>>c;
	}
	if(zuo&&b)b=0;
	printf(b? "YES":"NO");
	return 0;
}
