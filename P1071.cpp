#include<cstdio>
#include<cstring>
using namespace std;
main()
{
	char m[101],y[101],fy[101],jc1[25];
	scanf("%s",m);
	scanf("%s",y);
	scanf("%s",fy);
	int lo1,lo2;
	bool c2[25]={0},c1[25]={0},flag=0;//c2用于标记密码的出现，c3用于标记原码的出现 
	lo1=strlen(m);
	lo2=strlen(fy)-1; 
	if(lo1<=25){//检查密码串长度 
		flag=1;
	}
	if(flag==0){//检查是否有一对多的情况 
		for(int i=0;i<=lo1;i++){
			if(c2[m[i]-'A']==0){
				c2[m[i]-'A']=1;//标记密码已经出现 
				jc1[m[i]-'A']=y[i];//标记密码对应的原码 
				c1[y[i]-'A']=1;
			}
			if((c2[m[i]-'A']==1)&&(jc1[m[i]-'A']!=y[i])){
				//若记录的密码的原码与新出现的原码不同 
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		for(int i=0;i<=25;i++){
			if(c1[i]==0){
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		int fyma[101]={0};//翻译字符串 
		for(int i=0;i<=lo2;i++){
			fyma[i]=fy[i]-'A';
			fy[i]=jc1[fyma[i]];
		}
		printf("%s",fy);
	}
	if(flag==1){
		printf("Failed");
	}
	return 0;
}
