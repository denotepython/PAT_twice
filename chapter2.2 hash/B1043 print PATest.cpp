#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 10001;
char s[maxn];
int hashtable[128] = {0};

int main(){
	gets(s);
	int length = strlen(s);
	char out[6] = {'P', 'A', 'T', 'e', 's', 't'};
	int count = 0;
	for (int i = 0; i < length; ++i){
		hashtable[s[i]]++;
		for(int j = 0; j < 6; j++){
			if(s[i] == out[j]) count++;
		}
	}
	for (int i = 0; i < count;)
	{
		for(int j = 0; j < 6; j++){
			if(hashtable[out[j]] > 0){
				printf("%c", out[j]);
				hashtable[out[j]]--;
				i++;
			}
		}
	}
	return 0;
}