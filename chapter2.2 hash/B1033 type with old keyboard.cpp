#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 100010;

bool hashtable[maxn] = {false};
int main(){
	char a[100], b[maxn];
	cin >> a >> b;
	int lena = strlen(a);
	int lenb = strlen(b);
	bool shift = false;
	for (int i = 0; i < lena; ++i){
		if(a[i] == '+') {
			shift = true;
			break;
		}
	}
	if(shift == true){
		for (int i = 0; i < 26; ++i){
			hashtable['A' - ',' + i] = true;
		}
	}
	for (int i = 0; i < lena; ++i){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			hashtable[a[i] - ','] = true;
			hashtable[a[i] - ',' + 32] = true;
		}
		else hashtable[a[i] - ','] = true;
	}
	int count = 0;
	for (int i = 0; i < lenb; ++i){
		if(hashtable[b[i] - ','] == false) {
			printf("%c", b[i]);
			count++;
		}
	}
	if(count == 0) printf("\n");
	return 0;
}
//19分，没找出错误