#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[maxn];
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	sort(a, a + n);
	bool flag = false;
	for (int i = 0, j = n - 1; i < j;){
		if(a[i] + a[j] == m){
			flag = true;
			printf("%d %d", a[i], a[j]);
			break;
		}
		else if(a[i] + a[j] < m) i++;
		else j--;
	}
	if(flag == false) printf("No Solution");
	return 0;
}
//双指针最直接
//hash表法：if(hash[i] && hash[m-i])