#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct act{
	int begin,end;
	bool cho;
};
bool cmp(act a,act b)
{
	return a.end<b.end;
}

int main()
{
	int n;
	scanf("%d",&n);
	act emmm[1005];
	for(int i=1;i<=n;i++){
		scanf("%d %d",&emmm[i].begin,&emmm[i].end);
		emmm[i].cho=0;
	}
	sort(emmm+1,emmm+n+1,cmp);
	int sum=0;
	for(int i=1;i<=n;i++){
		if(emmm[i].cho)continue;
		sum++;
		for(int j=i;j<=n;j++){
			if(emmm[j].begin<=emmm[i].end){
				emmm[j].cho=1;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
