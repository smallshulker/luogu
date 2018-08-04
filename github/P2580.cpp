#include<cstdio>
#include<cstring>
using namespace std;
struct trie{
	bool check=0;
	bool word=0;
	trie *son[26]={0};
};
trie *root;
void make()
{
	char s[55];
	scanf("%s",s);
	int lo=strlen(s);
	trie *now=root;
	for(int i=0;i<lo;i++){
		if(now->son[s[i]-'a']){
			now = now->son[s[i]-'a'];
			continue;
		}
		else {
			now->son[s[i]-'a']=new trie;
			now=now->son[s[i]-'a'];
		}
	}
	now->word=1;
}

void check()
{
	char s[55];
	scanf("%s",s);
	int lo=strlen(s),i;
	trie *now=root;
	for(i=0;i<lo;i++){
		if(now->son[s[i]-'a']){
			now = now->son[s[i]-'a'];
			continue;
		}
		else {
			printf("WRONG\n");
			break;
		}
	}
	if(i == lo && now->word){
		if(now->check){
			printf("REPEAT\n");
		}
		else{
			printf("OK\n");
			now->check=1;
		}
	}
}

int main()
{
	root = new trie;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		make();
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		check();
	}
	return 0;
}
