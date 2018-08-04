#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    int n,a;
    scanf("%d",&n);
    priority_queue<int,deque<int>,greater<int> >que;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        que.push(a);
    }
    int b;
    int sum=0;
    while(que.size()!=1){
        a=que.top();
        que.pop();
        b=que.top();
        que.pop();
        que.push(a+b);
        sum+=a+b;
    }
    printf("%d",sum);
    return 0;
}
