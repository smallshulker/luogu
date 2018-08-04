#include<cstdio>
using namespace std;
int main()
{
	int x[12],s = 0,sum = 0,cun = 0;
	for(int i = 1;i <= 12;i++){
		scanf("%d",&x[i]);
		s = 300 - x[i] + s;
		if(s >= 100){
			cun = s / 100;
			s = s - cun * 100;
			sum = sum + cun * 100;
		}
		if(s < 0){
			printf("-%d",i);
			break;
		}
	}
	if(s > 0){
		sum = sum * 1.2 + s; 
		printf("%d",sum);
	}
	return 0;
}
