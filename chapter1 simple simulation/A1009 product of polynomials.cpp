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
		for (int j = N; j >= 0; j--){
			ans[i+j] += n1[i] * n2[j];
		}
	}
	for (int i = N; i >= 0; i--){
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
//得23分，有一个2分的case返回格式错误，但是肯定不是最后的空格，不然整个都不会得分
