#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 10001;

struct person
{
	char name[20];
	int h1, m1, s1;
	int h2, m2, s2;
}r[maxn];

bool cmp1(person a, person b){
	if(a.h1 != b.h1) return a.h1 < b.h1;
	else if(a.m1 != b.m1) return a.m1 < b.m1;
	else return a.s1 < b.s1;
}

bool cmp2(person a, person b){
	if(a.h2 != b.h2) return a.h2 > b.h2;
	else if(a.m2 != b.m2) return a.m2 > b.m2;
	else return a.s2 > b.s2;
}

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%s %d:%d:%d %d:%d:%d", &r[i].name,&r[i].h1,&r[i].m1,&r[i].s1,&r[i].h2,&r[i].m2,&r[i].s2);
	}
	sort(r, r + n, cmp1);
	printf("%s ", r[0].name);
	sort(r, r + n, cmp2);
	printf("%s", r[0].name);
}

//满分，因为输出结果忘记加r[0].name而是r[0]而耽搁10分钟，但是恰好dec-c++显示正常
//对三级排序又复习了一下，开始忘记了返回的应该是比较值，自动是一个bool值，而不是自己返回true/false
// 3
// cs213 15:30:28 17:00:10
// sc324 08:00:00 11:25:25
// cs654 21:45:00 21:58:40