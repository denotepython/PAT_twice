#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	int n, m;
	int a[maxn], b[maxn], c[maxn], d[maxn];
	scanf("%d", &n);
	int p1 = 0, q1 = 0;
	for (int i = 0; i < n; ++i){
		int temp;
		scanf("%d", &temp);
		if(temp > 0) a[p1++] = temp;
		else if(temp < 0) b[q1++] = temp;
	}
	scanf("%d", &m);
	int p2 = 0, q2 = 0;
	for (int i = 0; i < m; ++i){
		int temp;
		scanf("%d", &temp);
		if(temp > 0) c[p2++] = temp;
		else if(temp < 0) d[q2++] = temp;
	}
	sort(a, a + p1, cmp);
	sort(b, b + q1);
	sort(c, c + p2, cmp);
	sort(d, d + q2);
	int sum = 0;
	for (int i = 0; i < p1 || i < p2; ++i){
		sum += a[i] *  c[i];
	}
	for (int i = 0; i < q1 || i < q2; ++i){
		sum += b[i] *  d[i];
	}
	printf("%d\n", sum);
} 
//22分，有一个case没通过