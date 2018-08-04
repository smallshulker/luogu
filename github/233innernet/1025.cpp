#include<cstdio>
using namespace std;
int check(int x,int y) {
	int f[2]= {0};
	if(x<y) return 1;
	f[0]=x%y;
	f[1]=x/y%y;
	if(f[0]==f[1]) return 0;
	x/=y,x/=y;
	for(int flag=0; x>0; x/=y) {
		if(x%y!=f[flag]) return 0;
		if(flag==0)flag=1;
		else flag=0;
	}
	return 1;
}
int main() {
	int l,r,ll,rr,k;
	int s;
	scanf("%d %d %d %d %d",&l,&r,&ll,&rr,&k);
	for(int i=ll; i<=rr; i++) {
		s=0;
		for(int j=l; j<=r; j++) {
			s+=check(i,j);
		}
		if(s==k) {
			printf("%d\n",i);
		}
	}
	return 0;
}
