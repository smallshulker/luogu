#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char cf[15]= {0};
bool pd[15]= {0};
int cnt=0;
int k,n;
void print() {
	for(int i=0;i<=k-1;i++)
	printf("%3d",cf[i]+1);
	printf("\n");
}


void dfs(int loc,int i) {
	if(loc==k) {
		print();
		return;
	}
	for(; i<n; i++) {
		if(pd[i])continue;
		else {
			cf[loc]=i;
			pd[i]=1;
			dfs(loc+1,i);
			pd[i]=0;
		}
	}
}
int main() {
	scanf("%d %d",&n,&k);
	dfs(0,0);
	return 0;
}
