#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 100010;

struct stu
{
	string name;
	string id;
	int score;
}s[maxn];

bool cmp(stu a, stu b){
	if(a.score!= b.score) return a.score > b.score;
}

int main(){
	int n; 
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> s[i].name >> s[i].id >> s[i].score;
	}
	int amin, amax;
	cin >> amin >> amax;
	sort(s, s + n, cmp);
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i].score >= amin && s[i].score <= amax){
			cout << s[i].name << " " << s[i].id << "\n";
			count++;
		}
	}
	if(count == 0) cout << "NONE";
	return 0;
}
//满分，送分题。。。
// 4
// Tom CS000001 59
// Joe Math990112 89
// Mike CS991301 100
// Mary EE990830 95
// 60 100
