#include<cstdio>
#include<cmath>
void dfs(int x) {
	bool flag=1;
	int LOG;
	while(x) {
		if(!flag)
			printf("+");
		flag=0;
		LOG=(int)log2(x);
		if(LOG==1) {
			printf("2");
		} else {
			printf("2(");
			if(LOG==0) {
				printf("0");
				printf(")");
			} else {
				dfs(LOG);
				printf(")");
			}
		}
		x-=(int)pow(2,LOG);
	}
}
int main() {
	int n;
	scanf("%d",&n);
	dfs(n);
	return 0;
}
