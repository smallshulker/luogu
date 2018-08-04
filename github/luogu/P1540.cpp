#include<cstdio>
using namespace std;
int main()
{
  int a[100005],pop=0,tail=1;
  int x,m,n;
  int ans=0;
  scanf("%d %d",&m,&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&x);
    for(int j=pop;j<=tail;j++){
      if(x==a[j])goto emm;
    }
    a[tail++]=x;
    ans++;
    if(tail-pop>m)pop++;
emm:continue;
  }
  printf("%d",ans);
}
