#include<cstdio>
#include<cstring>
using namespace std;
main()
{
    char c[202];
    gets(c);
    long long sum=0;
    int lo=strlen(c)-1;
    for(int i=0;i<=lo;i++){
        if((c[i]=='a')||(c[i]=='d')||(c[i]=='g')||(c[i]=='j')||(c[i]=='m')||(c[i]=='p')||(c[i]=='t')||(c[i]=='w')||(c[i]==' ')) sum++;
        if((c[i]=='b')||(c[i]=='e')||(c[i]=='h')||(c[i]=='k')||(c[i]=='n')||(c[i]=='q')||(c[i]=='u')||(c[i]=='x')) sum+=2;
        if((c[i]=='c')||(c[i]=='f')||(c[i]=='i')||(c[i]=='l')||(c[i]=='o')||(c[i]=='r')||(c[i]=='v')||(c[i]=='y')) sum+=3;
        if((c[i]=='s')||(c[i]=='z')) sum+=4;
    }
    printf("%d",sum);
    return 0;
}
