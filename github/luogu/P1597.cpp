#include<cstdio>
#include<cstring>
using namespace std;
char s[1000];
main()
{
	int a=0,b=0,c=0;
	scanf("%s",s);
	for(int i = 0;i <= strlen(s) - 1;){;
		if(s[i] == 'a'){
			if(s[i+3] >= '0' && s[i+3] <= '9')a = s[i + 3] - '0';
			else{
				if(s[i + 3] == 'b') a = b;
				else if(s[i + 3] == 'c') a = c;
			}
			i += 5;
		}
		if(s[i] == 'b'){
			if(s[i + 3] >= '0' && s[i + 3] <= '9') b = s[i + 3] - '0';
			else{
				if(s[i + 3] == 'a') b = a;
				else if(s[i + 3] == 'c') b = c;
			}
			i += 5;
		}
		if(s[i] == 'c'){
			if(s[i + 3] >= '0' && s[i + 3] <= '9')c = s[i + 3] - '0';
			else{
				if(s[i + 3] == 'b') c = b;
				else if(s[i + 3] == 'a') c = a;
			}
			i += 5;
		}
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
