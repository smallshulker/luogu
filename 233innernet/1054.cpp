#include<cstdio>
using namespace std;
int n,cnt1=0,cnt2=0,sum=0;
int a[105]={0};
void print()
{
	cnt1++;
	for(int i=1;i<=sum;i++){
		printf("%d+",a[i]);
	}
	printf("%d\n",n-cnt2);
}
void dfs(int i){
	sum++;
	for(;i<n;i++){
		if(cnt2+i>=n)break;
		if(i>a[sum+1]&&a[sum+1]!=0)break;
		if(i>n-cnt2-i)break;
		cnt2+=i;
		a[sum]=i;
		dfs(i);
		print();
		a[sum]=0;
		
		cnt2-=i;
		
	}
	sum--;
}

int main()
{
//	freopen("p6.in","r",stdin),freopen("p6.out","w",stdout);
	scanf("%d",&n);
	dfs(1);
	return 0;
}
