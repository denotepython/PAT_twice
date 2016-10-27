#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1000;
int hashtable[maxn] = {0};
bool hash1[maxn] = {false};

bool cmp(int a, int b){
	if(a != b) return a > b;
}

int main(){
	int k;
	scanf("%d", &k);
	int temp;
	int ans[maxn], count = 0;
	int all[100][maxn] = {0};
	for (int i = 0; i < k; ++i){
		scanf("%d", &temp);
		int row = temp;
		int count2 = 0;
		while(temp != 1){
			if(temp % 2 == 0){
				temp /= 2;
				hashtable[temp]++;
				all[row][count2] = temp;
				count2++;
			}
			else{
				temp = (3 * temp +1) / 2;
				hashtable[temp]++;
				all[row][count2] = temp;
				count2++;
			}
		}
	}
	int record[maxn], count1 = 0;
	for (int i = 2; i < maxn; ++i){
		if(hashtable[i] == 1){
			record[count1] = i;
			count1++;
		}
	}
	for (int p = 0; p < count1; ++p){
		for (int i = 0; i < 100; ++i){
			for (int j = 0; j < maxn; ++j){
				if(record[p] == all[i][j]){
					if(hash1[i] == false){
						ans[count] = i;
						count++;
						hash1[i] = true;
						break;
					}
				}
			}
		}
	}
	sort(ans, ans + count, cmp);
	for (int i = 0; i < count; ++i){
		printf("%d", ans[i]);
		if(i < count - 1) printf(" ");
	}
	return 0;
}


//最后两个总是段错误，不过也还是太过复杂