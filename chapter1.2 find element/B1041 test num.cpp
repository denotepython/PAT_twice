#include <cstdio>
const int N = 1010;
struct stu{
	long long num;
	int real;
}test[N];

int main(){
	int n;
	scanf("%d", &n);
	int b, c;
	long long a;
	for (int i = 0; i < n; ++i){
		scanf("%lld%d%d", &a, &b, &c);
		test[b].num = a;
		test[b].real = c;
	}
	int m;
	scanf("%d", &m);
	int temp;
	for (int i = 0; i < m; ++i){
		scanf("%d", &temp);
		printf("%lld %d\n", test[temp].num, test[temp].real);
	}
}

//用结构体把关系对应起来就十分明了