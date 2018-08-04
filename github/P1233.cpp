#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct stick{
	int len,wei;
};
bool cmp(stick a,stick b)
{
    if(a.len>b.len)
    return 1;
    else
    return a.wei>b.wei;
}
int n;
stick a[5005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].wei;
	}
	sort(a+1,a+n+1,cmp);
	int cnt=0,twi;
	bool vis[5005]={0};
	for(int i=1;i<=n;i++){
        if(!vis[i]){
            twi=a[i].wei;
            for(int j=i+1;j<=n;j++){
                if(a[j].wei<=twi&&vis[j]==0){
                    vis[j]=1;
                    twi=a[j].wei;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
    	if(!vis[i]){
    		cnt++;
    	}
    }
	printf("%d",cnt);
	return 0;
}
