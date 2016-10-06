// 和前面加法的差不多，就是两层循环
// 注意的就是因为可能同一幂次的有几个，应该叠加而不是赋予
#include <cstdio>
const int N = 1001;
float n1[N] = {0};
float n2[N] = {0};
float ans[N] = {0};

int main(){
	int k1,k2;
	int p;
	float q;
	scanf("%d", &k1);
	for (int i = 0; i < k1; ++i){
		scanf("%d%f", &p, &q);
		n1[p] = q;
	}
	scanf("%d", &k2);
	for (int i = 0; i < k2; ++i){
		scanf("%d%f", &p, &q);
		n2[p] = q;
	}
	int count = 0;
	for (int i = N; i >= 0; i--){
		ans[i] = n1[i] + n2[i];
		if(ans[i] != 0) count++;
	}
	printf("%d ", count);
	for (int i = N; i >= 0; i--){
		if (ans[i] != 0){
			printf("%d %0.1f", i, ans[i]);
			if (count > 1) printf(" ");
			count--;
		}
	}
}
//得15分，有5分的case返回答案错误
