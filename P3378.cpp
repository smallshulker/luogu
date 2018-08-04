#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	int n,op,a;
	scanf("%d",&n);
	priority_queue<int,vector<int>,greater<int> > que;
	while(n--){
		scanf("%d",&op);
		if(op==1){
			scanf("%d",&a);
			que.push(a);
		}
		if(op==2){
			printf("%d\n",que.top());
		}
		if(op==3){
			que.pop();
		}
	}
	return 0;
}
