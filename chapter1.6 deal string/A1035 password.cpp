#include <cstdio>
#include <cstring>
const int maxn = 1010;
struct player
{
	char a[11]; //name
	char p[11]; //passward
	bool flag = false; //flag 为true 则表示修正过
}s[maxn];

int main(){
	int n, m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%s %s", &s[i].a, &s[i].p);
		int len = strlen(s[i].p);
		int count = 0;
		for(int j = 0; j < len; j++){
			if(s[i].p[j] == '1'){
				s[i].p[j] = '@';
				s[i].flag = true;
			}
			else if(s[i].p[j] == '0'){
				s[i].p[j] = '%';
				s[i].flag = true;
			}
			else if(s[i].p[j] == 'l'){
				s[i].p[j] = 'L';
				s[i].flag = true;
			}
			else if(s[i].p[j] == 'O'){
				s[i].p[j] = 'o';
				s[i].flag = true;
			}
			else count++;
		}
		if(count < len) m++;
	}
	if(m == 0){
		if(n == 1) printf("There is 1 account and no account is modified");
		else printf("There are %d accounts and no account is modified", n);
		//这里偷懒复制容易又有两个错误，一是are,二是accounts
	}
	else{
		printf("%d\n", m);
		for (int i = 0; i < n; ++i){
			if(s[i].flag == true){
				printf("%s %s\n", s[i].a, s[i].p);
			}
		}
	}
}
//满分
// 3
// Team000002 Rlsp0dfa
// Team000003 perfectpwd
// Team000001 R1spOdfa





