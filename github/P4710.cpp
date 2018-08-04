#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double v,a;
	scanf("%lf %lf",&v,&a);
	double vx,vy;
	vx=v*sin(a);
	vy=v*cos(a);
	double t=vy/10.0;
	double x,y;
	x=vx*t;
	y=5*t*t;
	printf("%.15lf %.15lf",x,y);
	return 0;
}
