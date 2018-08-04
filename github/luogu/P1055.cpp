#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	int a[9]={0},b[9]={0},checky=0,checkyout;
	a[1]=getchar();
	getchar();
	for(int i=2;i<=4;i++){
		a[i]=getchar();
	}
	getchar();
	for(int k=5;k<=9;k++){
		a[k]=getchar();
	}
	for(int j=1;j<=10;j++){
		a[j]=a[j]-48;
	}
	memcpy(b,a,sizeof(int) * 10);
	getchar();
	int check=getchar();
	if(check=='X'){
		check=10;
	}
	else{
		check-='0';
	}
	for(int cheng=1;cheng<=9;cheng++){
		b[cheng]*=cheng;
		checky+=b[cheng];
	}
	checkyout=checky%11;
	if(check==checkyout){
		printf("Right");
	}
	else{
		if(checkyout==10){
			printf("%d-%d%d%d-%d%d%d%d%d-X",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		}
		else{
			printf("%d-%d%d%d-%d%d%d%d%d-%d",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],checkyout);
		}
	}
	return 0;
}
