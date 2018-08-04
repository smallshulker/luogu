#include<cstdio>
using namespace std;
main()
{
	 int a,n,x,c=0,n1; 
	 scanf("%d %d",&n,&x);
	 for(;n>0;n--){
	 	n1=n;
	 	for(;n1>=1;n1/=10){
	 		a=n1%10;
			if(a==x){
				c++;
			}
		}
	 }
	printf("%d",c);
	 return 0;
}
