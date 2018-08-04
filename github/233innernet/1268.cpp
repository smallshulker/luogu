#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	int ax,ay,bx,by,cx,cy,dx,dy;
	int p,q,r;
	double ab,bc,cd,ac,ad,bd;
	scanf("%d",&t);
	double ans;
	while(t--){
		scanf("%d %d %d %d",&ax,&ay,&bx,&by);
		scanf("%d %d %d %d",&cx,&cy,&dx,&dy);
		scanf("%d %d %d",&p,&q,&r);
		ab=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay))/p;
		cd=sqrt((cx-dx)*(cx-dx)+(cy-dy)*(cy-dy))/q;
		bc=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy))/r;
		ac=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy))/r;
		ad=sqrt((ax-dx)*(ax-dx)+(ay-dy)*(ay-dy))/r;
		bd=sqrt((bx-dx)*(bx-dx)+(by-dy)*(by-dy))/r;
		ans=ab+bc+cd;
		ans=min(ans,ab+bd);
		ans=min(ans,ac+cd);
		ans=min(ans,ad);
		printf("%.2lf\n",ans);
	}
	return 0;
}
