#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
using namespace std;
string ans;
string _ans;
string n;
int _left,lo;
bool flag=0;
void pd(){
	if(flag=0){
		ans=_ans;
		flag=1;
	}
	else{
		if(ans>_ans){
			ans=_ans;
		}
	}
}
void dfs(int loc,int i)
{
	if(loc==_left-1){
		pd();
		return;
	}
	for(i=i+1;i<=lo;i++){
		_ans[loc]=n[i];
		dfs(loc+1,i);
		_ans[loc]=0;
	}
}
int main()
{
	cin>>n;
	int s;
	scanf("%d",&s);
	lo=n.length();
	_left=lo-s;
	dfs(0,-1);
	cout<<ans;
	return 0;
}
