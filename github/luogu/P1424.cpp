#include<cstdio>
using namespace std;
main()
{
	int x,n,c=0,sum=0;
	scanf("%d%d",&x,&n);
	for(int i=x-1; ;){
		c++;
		i+=1;
		if(i==8){
			i=1;
		}
		if((i!=6)&&(i!=7)){
			sum+=250;
		}
		if(c==n){
			break;
		}
	}
	printf("%d",sum); 
	return 0;
}
