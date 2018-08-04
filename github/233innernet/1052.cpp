#include<cstdio>
#include<cstring>
#include<ctime>
#include<iostream>
using namespace std;
int cf[15]= {0};
bool pd[15]= {0};
int n,cnt=0;
void print()
{
	for(int i = 1;i <= n;i++)
	{
		cout<<"    "<<cf[i];
	}
	cout<<endl;
	return;
}

void dfs(int loc) {
	if(loc==n+1) {
		print();
		return;
	}
	for(int i=1; i<=n; i++) {
		if(pd[i])continue;
		else {
			cf[loc]=i;
			pd[i]=1;
			dfs(loc+1);
			pd[i]=0;
		}
	}
}

int main() {
	scanf("%d",&n);
	dfs(1);
	return 0;
}
