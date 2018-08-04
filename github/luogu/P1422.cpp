#include<cstdio>
main ()
{
	int a;
	double m;
	scanf("%d",&a);
	if(a>150){
		if(a>400){
			m=(a-400)*0.5663+183.52; 
		}
		else{
			m=(a-150)*0.4663+66.945;
		}
	}
	else{
		m=0.4463*a;
	}
	printf("%.1lf",m);
	return 0;
}
