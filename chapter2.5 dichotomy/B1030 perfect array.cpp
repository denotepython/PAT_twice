#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;

int main(){
	int n, p;
	scanf("%d %d", &n, &p);
	int s[maxn];
	for (int i = 0; i < n; ++i){
		scanf("%d", &s[i]);
	}
	sort(s, s + n);
	int i = 0, j = 0, count = 0;
	while(i < n && j < n){
		while(j < n && s[j] <= (long long)s[i] * p){
			count = max(count, j - i + 1);
			j++;
		}
		i++;
	}
	printf("%d\n", count);
	return 0;
}
