#include<cstdio>
using namespace std;
void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int gcd(int a,int b){
	int r=a%b;
	while (r){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	int x,y,x1,y1,x2,y2;
	scanf("%d/%d %d/%d",&x,&y,&x1,&y1);
	x*=x1;
	y*=y1;
	x2=x;
	y2=y;
	if(x<y)swap(&x,&y);
	int r=gcd(x,y);
	printf("%d %d",y2/r,x2/r);
	return 0;
}
