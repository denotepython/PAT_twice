#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 2010;
char course[4] = {'A', 'C', 'M', 'E'};
int query[maxn];
struct stu
{
	int num;
	int g[4]; //这里也是这个题目的精华，通过这种方式可以实现4个排序
	int rank[4];
	char major = 'N';
	int best = maxn;
}s[maxn];

int now;
bool cmp(stu a, stu b){
	return a.g[now] > b.g[now];
}

bool cmp1(stu a, stu b){
	return a.num < b.num;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i){
		scanf("%d%d%d%d", &s[i].num, &s[i].g[1], &s[i].g[2], &s[i].g[3]);
		s[i].g[0] = (s[i].g[1] + s[i].g[2] + s[i].g[3]) / 3;
	}
	for (int i = 0; i < m; ++i){
		scanf("%d", &query[i]);
	}
	for (int i = 0; i < 4; ++i){
		now = i;
		sort(s, s + n, cmp);
		s[0].rank[i] = 1;
		for (int j = 1; j < n; ++j)
		{
			if(s[j].g[i] == s[j-1].g[i]) {
				s[j].rank[i] = s[j-1].rank[i];
			}
			else {
				s[j].rank[i] = j + 1;
			}
		}//实现可以并列排名的算法部分
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < 4; ++j){
			if(s[i].rank[j] < s[i].best){
				s[i].best = s[i].rank[j];
				s[i].major = course[j];
			}
		}
	}
	sort(s, s + n, cmp1);
	for (int i = 0; i < m; ++i){
		bool flag = false;
		int mark;
		for (int j = 0; j < n; ++j)
		{
			if(query[i] == s[j].num){
				flag = true;
				mark = j; //需要一个mark标记，并不是s[i]的输出
				break;
			}
		}
		if(flag == false) {
			printf("N/A\n");
		}
		else{
			printf("%d %c\n",s[mark].best, s[mark].major);
		}
	}

}
// 保留所有排名过后再从中选出最佳排名
// 1、排名可以并列
// 2、相同的对象同时有多个排名
// 3、同一个学生的多个排名相同时输出优先级的控制
// 4、要查询的ID如何判断是否存在于N个已知ID中，如果每次循环判断复杂度太高
// 5 6
// 11 98 85 88
// 12 70 95 88
// 13 82 87 94
// 14 91 91 91
// 15 85 90 90
// 11
// 12
// 13
// 14
// 15
// 99

// 5 7
// 11 98 85 88
// 12 70 95 88
// 13 82 87 94
// 14 91 91 91
// 15 85 90 97
// 11
// 12
// 13
// 54
// 14
// 15
// 99

'''
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 2010;
char course[4] = {'A', 'C', 'M', 'E'};
int query[maxn];
struct stu
{
	int num;
	int g[4];
	int rank = 2010;
	char major = 'N';
}s[maxn];

int now;
bool cmp(stu a, stu b){
	return a.g[now] > b.g[now];
}

bool cmp1(stu a, stu b){
	return a.num < b.num;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i){
		scanf("%d%d%d%d", &s[i].num, &s[i].g[1], &s[i].g[2], &s[i].g[3]);
		s[i].g[0] = (s[i].g[1] + s[i].g[2] + s[i].g[3]) / 3;
	}
	for (int i = 0; i < m; ++i){
		scanf("%d", &query[i]);
	}
	for (int i = 0; i < 4; ++i){
		now = i;
		sort(s, s + n, cmp);
		s[0].rank = 1;
		s[0].major = course[now];
		for (int j = 1; j < n; ++j)
		{
			if(s[j].g[i] == s[j-1].g[i]) {
				s[j].rank = s[j-1].rank;
				if(s[j].major == 'N') s[j].major = course[now];
			}
			else {
				if(s[j].rank > j + 1) {
					s[j].rank = j + 1;
					s[j].major = course[now];
				}
			}
		}
	}
	sort(s, s + n, cmp1);
	for (int i = 0; i < m; ++i){
		int mark;
		bool flag = false;
		for (int j = 0; j < n; ++j)
		{
			if(query[i] == s[j].num){
				mark = j;
				flag = true;
				break;
			}
		}
		if(flag == false) printf("N/A\n");
		else{
			printf("%d %c\n",s[mark].rank, s[mark].major);
		}
	}
}
//该答案得到18分。只保留最优排名，没有记录所有排名
1、排名可以并列
2、相同的对象同时有多个排名
3、同一个学生的多个排名相同时输出优先级的控制
4、要查询的ID如何判断是否存在于N个已知ID中，如果每次循环判断复杂度太高
5 6
11 98 85 88
12 70 95 88
13 82 87 94
14 91 91 91
15 85 90 90
11
12
13
14
15
99

5 7
11 98 85 88
12 70 95 88
13 82 87 94
14 91 91 91
15 85 90 97
11
12
13
54
14
15
99
'''