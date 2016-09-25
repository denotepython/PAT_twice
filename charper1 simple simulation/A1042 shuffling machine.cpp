#include <cstdio>
const int N = 54;
int k;
int start[N], next[N], end[N];
char map[5] = {'S', 'H', 'C', 'D', 'J'};

int main(){
	scanf("%d", &k);
	for(int i = 1; i <= N; ++i) {
		start[i] = i;
	}
	for (int i = 1; i <= N; ++i){
		scanf("%d", &next[i]);
	}
	for (int i = 0; i < k; ++i){
		for (int j = 1; j <= N; ++j){
			end[next[j]] = start[j];
		}
		for(int j = 1; j <= N; ++j) {
			start[j] = end[j];
		}
	}
	for (int i = 1; i <= N; ++i){
		if(i != 1) printf(" ");
		start[i]--;
		printf("%c%d", map[start[i] / 13], start[i] % 13 + 1);
	}
	return 0;
	// for (int i = 1; i < N; ++i)
	// {
	// 	start[i]--;
	// 	printf("%c%d ", map[start[i] /13], start[i] % 13 + 1);
	// }
	// start[N]--;
	// printf("%c%d", map[start[N] /13], start[N] % 13 + 1);
	// return 0;
	//该格式和书中答案测试也是只有一个case通过。上面代码基本上和书中一模一样，还是不知道哪里错了
}
