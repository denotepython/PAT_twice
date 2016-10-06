// 
#include <cstdio>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		long long a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a + b > c) printf("Case #%d: true\n", i + 1);
		else printf("Case #%d: false\n", i + 1);	
	}
}

//错误一：输出时下标从1开始而不是0
//错误二：int型会溢出，但是也不能用float，应该用long long型
//错误三：对应的输入输出格式也要改和long long 对应的lld%

//10^9以内，用int型；10^18以内整数，用long long型