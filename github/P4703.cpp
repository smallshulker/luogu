#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cmath>
using namespace std;
double rbqx[15],rbqy[15];
double n,l;
const double eps=0.0000001;
bool check(double x,double y)
{
    for(int i=1;i<=n;i++)
    {
        if((x-rbqx[i])*(x-rbqx[i])+(y-rbqy[i])*(y-rbqy[i])>(l/n)*(l/n))
        return true;
    }
    return false;
}
int main()
{
    srand(233333);
    scanf("%lf",&n);
    scanf("%lf",&l);
    for(int i=1;i<=n;i++){
        scanf("%lf %lf",rbqx+i,rbqy+i);
    }
    if(check(0,0)){
        printf("0.000 0.000");
        return 0;
    }
    if(check(0,l)){
        printf("0.000 %.3lf",l);
        return 0;
    }
    if(check(l,0)){
        printf("%.3lf 0.000",l);
        return 0;
    }
    if(check(l,l)){
        printf("%.3lf %.3lf",l,l);
        return 0;
    }
    double x,y;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        x=(rbqx[i]+rbqx[j])/2;
        y=(rbqy[i]+rbqy[j])/2;
        if(check(x,y)){
          printf("%.3lf %.3lf",x,y);
        }
      }
    }
    printf("GG");
    return 0;
  }
