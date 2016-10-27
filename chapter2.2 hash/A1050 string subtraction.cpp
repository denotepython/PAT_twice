#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 10001;
char s1[maxn], s2[maxn];
bool hashtable[128] = {false};

int main(){
	gets(s1);
	gets(s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i < len2; ++i){
		hashtable[s2[i]] = true;
	}
	for (int i = 0; i < len1; ++i){
		if(hashtable[s1[i]] == false) printf("%c", s1[i]);
	}
}