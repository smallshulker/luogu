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
	bool c2[25]={0},c1[25]={0},flag=0;//c2���ڱ������ĳ��֣�c3���ڱ��ԭ��ĳ��� 
	lo1=strlen(m);
	lo2=strlen(fy)-1; 
	if(lo1<=25){//������봮���� 
		flag=1;
	}
	if(flag==0){//����Ƿ���һ�Զ����� 
		for(int i=0;i<=lo1;i++){
			if(c2[m[i]-'A']==0){
				c2[m[i]-'A']=1;//��������Ѿ����� 
				jc1[m[i]-'A']=y[i];//��������Ӧ��ԭ�� 
				c1[y[i]-'A']=1;
			}
			if((c2[m[i]-'A']==1)&&(jc1[m[i]-'A']!=y[i])){
				//����¼�������ԭ�����³��ֵ�ԭ�벻ͬ 
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
		int fyma[101]={0};//�����ַ��� 
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
