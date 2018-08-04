#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",2*b+(b+a+1)*(a-b)/2);
    return 0;
}
