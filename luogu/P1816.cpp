#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int st[100005][30];
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int LOG=log2(n);
  for(int i=1;i<=n;i++){
    scanf("%d",&st[i][0]);
  }
  for(int i=1;i<=LOG;i++){
    for(int j=1;j+(1<<i-1)<=n;j++){
      st[j][i]=min(st[j][i-1],st[j+(1<<i-1)][i-1]);
    }
  }
  int l,r;
  for(int i=1;i<=m;i++){
    scanf("%d %d",&l,&r);
    LOG=log2(r-l+1);
    printf("%d ",min(st[l][LOG],st[r+1-(1<<LOG)][LOG]) );
  }
  return 0;
}
