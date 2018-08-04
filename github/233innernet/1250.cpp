#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int>quemax;
	priority_queue<int,deque<int>,greater<int> >quemin;
	int n;
	scanf("%d",&n);
	int m;
	int a;
	while(n--){
		scanf("%d",&m);
		while(m--){
			scanf("%d",&a);
			quemax.push(a);
			quemin.push(a);
		}
		printf("%d %d\n",quemin.top(),quemax.top());
		quemin.pop();
		quemax.pop();
	}
	return 0;
}
