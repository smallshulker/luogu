#include<cstdio>
using namespace std;
main()
{
	int n,b=0;
	scanf("%d",&n);
	for(int a1=1;a1<=2;a1++){
		for(int a2=0;a2<=9;a2++){
			for(int a3=0;a3<=9;a3++){
				for(int a4=0;a4<=9;a4++){
					for(int a5=0;a5<=9;a5++){
						if(((100*a1+10*a2+a3)%n==0)&&((100*a2+10*a3+a4)%n==0)&&((100*a3+10*a4+a5)%n==0)){
							printf("%d%d%d%d%d\n",a1,a2,a3,a4,a5);
							b=1;
						}
					}
				}
			}
		}
	}
	if(300%n==0){
		printf("30000");
		b=1;
	}
	if(b==0) printf("No");
	return 0;
}
