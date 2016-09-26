#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100001;
struct stu
{
	char name[20];
	char num[20];
	int score;
}test[maxn];

bool cmp(stu a, stu b){
	return a.score >= b.score;
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%s%s%d", &test[i].name, &test[i].num, &test[i].score);
	}
	sort(test,test + n,cmp);
	printf("%s %s\n", test[0].name, test[0].num);
	printf("%s %s\n", test[n-1].name, test[n-1].num);
}

//掌握了C++中的sort排序，这是最简单的一类题目
//复习结构体的排序，sort(a, a + n, cmp)
//cmp函数中可以设置多级比较
/*
bool cmp(node a, node b){
	if(a.x != b.x) return a.x > b.x; // >表示从大到小排序
	else return a.y < b.y    //         <表示从小到大排序
}
*/










