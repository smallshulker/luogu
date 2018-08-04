#include<cstdio>
int main()
{
	int k;
	scanf("%d",&k);
	int n=9;
	bool flag=0;
	for(int a1=1;a1<=3;a1++){
		if(a1==3){
			n=0;
		}
		for(int a2=0;a2<=n;a2++){
			for(int a3=0;a3<=n;a3++){
				for(int a4=0;a4<=n;a4++){
					for(int a5=0;a5<=n;a5++){
						if((100*a1+10*a2+a3)%k==0){
							if((100*a2+10*a3+a4)%k==0){
								if((100*a3+10*a4+a5)%k==0){
									printf("%d%d%d%d%d\n",a1,a2,a3,a4,a5);
									flag=1;
								}
							}
						}
					}
				}
			}
		}
	}
	if(flag==0){
		printf("No");
	}
	return 0;
}
