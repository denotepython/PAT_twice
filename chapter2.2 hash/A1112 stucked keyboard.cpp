#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 100; 

bool hashtable[maxn] = {false};

int main(){
	int k;
	char s[1010];
	scanf("%d\n", &k);
	gets(s);
	int length = strlen(s);
	char bad[maxn];
	int count = 1, badnum = 0;
	for (int i = 1; i < length; ++i){
		if(s[i] != s[i-1]){
			count = 1;
		}

		else{
			count++;
			if(count == k && hashtable[s[i] - '0'] == false){
				hashtable[s[i] - '0'] = true;
				bad[badnum] = s[i];
				badnum++;
			}
		}
	}//找到所有的重复了k次的元素
	for (int i = 0; i < badnum; ++i){
		for(int j = 0; j < length; j++){
			int p = 1;
			if(s[j] == bad[i]){
				for(p = 1; p < k; p++){
					if(s[j + p] != bad[i]){
						hashtable[bad[i] - '0'] = false;
						break;
					}
				}
			}
			if(p == k){
				j = j + k - 1; //后面k-1个都和第j个相等，要跳过这k-1个元素
			}//本来位置应该是j+k，但是因为还会执行一下j++
			if(hashtable[bad[i] - '0'] == false) break;	
			//已经找出来一个反例的就可以跳出循环了
		}
	}//去除其中不满足每次都重复k次的元素
	for (int i = 0; i < badnum; ++i){
		if(hashtable[bad[i] - '0'] == true) printf("%c", bad[i]);
	}
	printf("\n");
	for (int i = 0; i < length;)
	{
		if(hashtable[s[i] - '0'] == false) {
			printf("%c", s[i]);
			i++;
		}
		else{
			printf("%c", s[i]);
			i += k;
		}
	}
}

// 3
// caseee1__thiiis_iiisss_a_teeeeeest
