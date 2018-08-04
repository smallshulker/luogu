#include<cstdio>
#include<algorithm>
using namespace std;
int n[100005];

void qsort(int l,int mid,int r)
{
	if(l==mid  || r == mid)return ;
	for(int i=mid;i>=l;i--){
		if(n[i]>n[mid])
		for(int j=mid;j<=r;j++){
			if(n[j]<n[mid])swap(n[i],n[j]);
		}
	}
	qsort(l,(l+mid)/2,mid);
	qsort(mid,(r+mid)/2,r);
}

int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++) scanf("%d",&n[i]);
	int j=1;
	for (int i = 2; i < a; i++) {
		if(a[i]<a[j])swap(a[j],a[i]),j++;
	}
	qsort(1,(a+1)/2,a);
	for(int i=1;i<=a;i++) printf("%d ",n[i])
	return 0;
}
