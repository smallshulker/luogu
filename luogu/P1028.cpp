#include <iostream>
#include <cstdio>
using namespace std;
int s[1005]={0}; 
int du(int x)
{
	if(s[x])return s[x];
	else{
		int count;
		count = 1;
		int i;
		int y = x / 2;
		for(i=1;i <= y;i++){
			count+=du(i);
		}
		s[x]=count;
    	return count;
    }
}

int main() {
    int a;
    scanf("%d",&a);
    du(a);
    printf("%d",s[a]);
    return 0;
}
