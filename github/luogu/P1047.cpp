#include<cstdio>
using namespace std;
int x[100]={0},y[100]={0};
bool tree[10001]={0};
main()
{
	int l,m,sum=0,cha[100]={0};
	scanf("%d %d",&l,&m);
	for(int i=1;i<=m;i++){
		scanf("%d %d",&x[i],&y[i]);
		for(x[i];x[i]<=y[i];x[i]++){
			tree[x[i]]=1;
		}
	}
	for(int jian=0;jian<=10001;jian++){
		if(tree[jian]==1){
			sum++;
		}
	}
	printf("%d",l+1-sum);
	return 0;
}
