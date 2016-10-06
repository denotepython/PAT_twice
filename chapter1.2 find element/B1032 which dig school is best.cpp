#include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		int a,b;
		scanf("%d%d", &a,&b);
		school[a] += b; 
	}
	int MAX = 0, num = 0;
	for (int i = 0; i < maxn; ++i){
		if(school[i] > MAX) {
			MAX = school[i];
			num = i;
		}
	}
	printf("%d %d", num, MAX);
}

//5分钟解决，基础题
// 6
// 3 65
// 2 80
// 1 100
// 2 70
// 3 40
// 3 0
