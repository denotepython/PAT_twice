#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 10000;
bool hashtable[maxn] = {false}; 
bool cmp(int a, int b){
	return a > b;
}

int main(){
	int k;
	scanf("%d", &k);
	int temp, a[110];
	for (int i = 0; i < k; ++i){
		scanf("%d",&a[i]);
		temp = a[i];
		while(temp != 1){
			if(temp % 2 == 0) temp /= 2;
			else temp = (3 * temp + 1) / 2;
			hashtable[temp] = true;
		}
	}
	int count = 0;
	for (int i = 0; i < k; ++i){
		if(hashtable[a[i]] == false) count++;
	}
	sort(a, a + k, cmp); //这里要对k个数排序，然后用hash表控制满足条件的输出
	for (int i = 0; i < k; ++i){
		if(hashtable[a[i]] == false){
			printf("%d", a[i]);
			count--;
			if(count > 0) printf(" ");
		}
	}
	return 0;
}

//本质是找出K个数中没被覆盖的数，而不是每一个数中产生序列中独一无二的数
//比如官方例子中7：11 17 26 13 20 10 5 8 4 2 1，11只出现一次
//但是我们最后输出的数并不关心11