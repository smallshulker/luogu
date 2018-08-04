#include<cstdio>
using namespace std;
main()
{
	 int a,n,c=0,x,n1; 
	 scanf("%d %d",&n,&x);
	 for(int i=n;n<=x;n++){
	 	n1=n;
	 	for(;n1>=1;n1/=10){
	 		a=n1%10;
			if(a==2){
				c++;
			}
		}
	 }
	printf("%d",c);
	 return 0;
}
