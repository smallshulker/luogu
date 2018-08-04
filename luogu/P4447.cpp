#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  long long a[100005];
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    scanf("%lld",a+i);
  }
  long long ans=0;
  for (int i = 1; i < n; i++) {
    ans+=max(a[i],a[i-1]);
  }
  printf("%lld",ans);
  return 0;
}

