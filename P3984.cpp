#include<cstdio>
using namespace std;
int main()
{
	long long n,t,t_i[200005]={0};
	scanf("%d %d",&n,&t);
	for(int i=1;i<=n;i++){
		scanf("%d",&t_i[i]);
	}
	int sum=0;
	for(int i=1;i<=t_i[n];i++){
		sum++;
