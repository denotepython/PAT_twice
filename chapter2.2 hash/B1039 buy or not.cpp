#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 1001;
int hash1[130] = {0};
int hash2[130] = {0};

int main(){
	char a[maxn], b[maxn];
	gets(a);
	gets(b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	for (int i = 0; i < len1; ++i){
		hash1[a[i]]++;
	}
	for (int i = 0; i < len2; ++i)
	{
		hash2[b[i]]++;
	}
	bool flag = true;
	int owe = 0, more = 0;
	for (int i = 0; i < 130; ++i){
		if(hash1[i] < hash2[i]) {
			flag = false;
			owe += hash2[i] - hash1[i];
		}
		else{
			more += hash1[i] - hash2[i];
		}
	}
	if(flag == true) printf("Yes %d\n", more);
	else printf("No %d\n", owe);
	return 0;
}


//更巧妙的在于不需要两个hash表，当b中出现时就hash[b[i]]--
///如果是yes，直接就是len1-len2