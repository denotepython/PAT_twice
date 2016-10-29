#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1010;
struct moon{
	double a, b, c;
}s[maxn];

bool cmp(moon p, moon q){
	return p.c > q.c;
}

int main(){
	int n; 
	double m; //虽然m是正整数，但是为了方便，改成double了才正确
	scanf("%d %lf", &n, &m);
	for (int i = 0; i < n; ++i) scanf("%lf", &s[i].a);
	for (int i = 0; i < n; ++i) {
		scanf("%lf", &s[i].b);
		s[i].c = s[i].b / s[i].a;
	}
	sort(s, s + n, cmp);
	int count = 0;
	double sum = 0, money = 0;
	while(sum < m){
		sum += s[count].a;
		money += s[count].b;
		count++;
	}
	count--;
	sum -= s[count].a;
	money -= s[count].b;
	double left = m - sum;
	money += s[count].c * left;
	printf("%.2f", money);
}
//两分段错误
