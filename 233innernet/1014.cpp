#include<cstdio>
int mo[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
void rn(int y) {
	if(y%4==0) {
		mo[2]=29;
	} else {
		mo[2]=28;
	}
}
int main() {
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	rn(y);
	for(int i=1; i<=10000; i++) {
		if(m>12) {
			m=1;
			y++;
			rn(y);
		}
		if(d>mo[m]) {
			d=1;
			m++;
		}
		d++;
	}
	
	if(d>mo[m]) {
		d=1;
		m++;
	}
	if(m>12) {
		m=1;
		y++;
		rn(y);
	}
	printf("%d-%d-%d",y,m,d);
	return 0;
}
