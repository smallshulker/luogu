#include<cstdio>
double a,b,c,d;
int main()
{
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	for(double x=-100;x<=100;x+=0.01)
	if(a*x*x*x+b*x*x+c*x+d>-0.001&&a*x*x*x+b*x*x+c*x+d<0.001){
		printf("%.2lf ",x);
	}
	return 0;
}
