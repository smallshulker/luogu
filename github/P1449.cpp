#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[1005];
	gets(s);
	int top=0;
	int lo=strlen(s),cun[500],x;
	int i=0;
	while(s[i]!='@'){
		switch(s[i]){
			case '+':cun[--top]+=cun[top+1];break;
			case '-':cun[--top]-=cun[top+1];break;
			case '*':cun[--top]*=cun[top+1];break;
			case '/':cun[--top]/=cun[top+1];break;
			default :{
				x=0;
				while(s[i]!='.'){
					x=x*10+s[i]-'0';
					i++;
				}
				cun[++top]=x;
			}
		}
		i++; 
	}
	printf("%d",cun[1]);
	return 0;
}
