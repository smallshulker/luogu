#include<cstdio>
using namespace std;
int main()
{
	int n,lev = 0;
	scanf("%d",&n);
	double fhp,dexp,hp = 10,exp = 0,sj=1;
	for(int i = 1;i <= n;i++){
		scanf("%lf %lf",&fhp,&dexp);
		hp -= fhp;
		if(hp > 10) hp = 10;
		if(hp <= 0) break;
		else {
			exp+=dexp;
			while(exp >= sj){
				lev++;
				exp -= sj;
				sj *= 2;
			}
		}
	}
	printf("%d %g",lev,exp);
	return 0;
}
