#include<cstdio>
int main() {
	float s,a,b;
	scanf("%f",&s);
	scanf("%f",&a);
	scanf("%f",&b);
	float t1=111,t2=0;
	float k1=0,k2=s,k=0;
	while(t1>1){
		k=(k1+k2)/2;
		t1=k/b+(s-k)/a;
		t2=k/b+k/(a+b)+(s-a*(k/b+k/(a+b)))/b;
	} 
		printf("%f\n",k);
	return 0;
}

