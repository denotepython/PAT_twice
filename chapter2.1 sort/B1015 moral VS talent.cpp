//妙在在结构体中设置一个rank变量，用它来控制优先级
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
//10的5次方要设置为100010，否则报段错误
struct stu
{
	int num;
	int d;
	int c;
	int sum;
	int rank;
}s[maxn];

bool cmp(stu a, stu b){
	if(a.rank != b.rank) return a.rank < b.rank;
	else if(a.sum != b.sum) return a.sum > b.sum;
	else if(a.d != b.d) return a.d > b.d;
	else return a.num < b.num;
}

int main(){
	int n, low, high, m;
	scanf("%d%d%d", &n, &low, &high);
	m = n;
	for (int i = 0; i < n; ++i){
		scanf("%d %d %d", &s[i].num, &s[i].d, &s[i].c);
		s[i].sum = s[i].d + s[i].c;
		if(s[i].d >= high && s[i].c >= high) s[i].rank = 1;
		else if(s[i].d >= high && s[i].c < high && s[i].c >= low) s[i].rank = 2;
		else if(s[i].d < high && s[i].c < high && s[i].d >= low && s[i].c >= low && s[i].d >= s[i].c) s[i].rank = 3;
		else if(s[i].d < high && s[i].c < high && s[i].d >= low && s[i].c >= low && s[i].d < s[i].c)	s[i].rank = 4;
		else if(s[i].d < low || s[i].c < low){
			s[i].rank = 5;
			m--;
		}
		else s[i].rank = 4;
	}
	sort(s, s + n, cmp);
	printf("%d\n", m);
	for (int i = 0; i < m; ++i){
		printf("%d %d %d\n", s[i].num, s[i].d, s[i].c);
	}
}
// 14 60 80
// 10000001 64 90
// 10000002 90 60
// 10000011 85 80
// 10000003 85 80
// 10000004 80 85
// 10000005 82 77
// 10000006 83 76
// 10000007 90 78
// 10000008 75 79
// 10000009 59 90
// 10000010 88 45
// 10000012 80 100
// 10000013 90 99 
// 10000014 66 60
