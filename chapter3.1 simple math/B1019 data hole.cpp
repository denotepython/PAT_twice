#include <cstdio>
#include <algorithm>
using namespace std;


int main(){
	int num, MAX = 0, MIN = 0, a[4], left;
	scanf("%d", &num);
	while(1){
		for (int i = 0; i < 4; ++i){
			a[i] = num % 10;
			num /= 10;
		}
		sort(a, a + 4);
		for (int i = 3; i >= 0 ; --i){
			MAX = MAX * 10 + a[i];
		}
		for (int i = 0; i < 4; ++i){
			MIN= MIN * 10 + a[i];
		}
		num = MAX - MIN;
		printf("%04d - %04d = %04d\n", MAX, MIN, num);
		MAX = 0, MIN = 0;
		if(num == 6174 || num == 0) break; //这样的特判非常有效
	}
	return 0;
}
