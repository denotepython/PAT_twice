#include <cstdio>
#include <algorithm>
using namespace std; //这句不能忘记
int main(){
	int n, m, a[105];
	scanf("%d%d", &n, &m);
	m %= n; //没这一句少5分
	for (int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
	}
	reverse(a, a + n - m);
	reverse(a + n - m, a + n);
	reverse(a, a + n);
	for (int i = 0; i < n - 1; ++i) printf("%d ", a[i]);
	printf("%d", a[n-1]);
	return 0;
}

/*
此答案仍有部分错误
错在题目并没有说m<n,m如果大于n，需要进行取模操作
*/