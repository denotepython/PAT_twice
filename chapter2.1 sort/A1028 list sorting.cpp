#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
const int maxn = 100001;

struct stu
{
	string id;
	string name;
	int score;
}s[maxn];
int c; //用全局变量控制就不用写三个cmp函数
bool cmp(stu a, stu b){
	if(c == 1){
		if(a.id != b.id) return a.id < b.id;
	}
	else if(c == 2){
		if(a.name != b.name) return a.name < b.name;
		else return a.id < b.id;
	}
	else if(c == 3){
		if(a.score != b.score) return a.score < b.score;
		else return a.id < b.id;
	}
}

int main(){
	int n;
	cin >> n >> c;
	for (int i = 0; i < n; ++i){
		cin >> s[i].id >> s[i].name >> s[i].score;
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; ++i){
		cout << s[i].id << " " << s[i].name << " " << s[i].score << "\n";
	}
}
//21分，最后一个案例用cin，cout会超时，但是对于string类型只能用cin、cout整个输出
// 3 1
// 0007 james 85
// 0008 amy 90
// 0001 zoe 60
