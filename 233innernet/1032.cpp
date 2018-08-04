#include<cstdio>
#include<cstring>
bool a[10005];
int main()
{
	memset(a,0,sizeof(a));
	int n,k,x;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		a[x]=1;
	}
	int p=1;
	for(int i=1;i<=k;p++){
		if(a[p]){
			i++;
		}
	}
	p--;
	if(p<10000)
	printf("%d",p);
	if(p>10000){
		printf("NO RESULT");
	}
	return 0;
}
