#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int num[105];
char ss[105];
int gcd(int a,int b) {
	return a%b==0?b:gcd(b,a%b);
}
int tran(char a) {
	return int(a) - 'A';
}
int main() {
	scanf("%s",ss);
	for(int i=0; i<strlen(ss); i++) {
		num[tran(ss[i])]++;
	}
	int gcdx = num[tran(ss[0])];
	char l = 'A';
	char r = 'z';
	for(int i=tran(l); i<=tran(r); i++) {
		if(num[i] != 0)
			gcdx = gcd(gcdx,num[i]);
	}
	printf("%d",strlen(ss) / gcdx);
	return 0;
}
