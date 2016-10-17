#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 30001;
struct record
{
	long long num;
	int local;
	int score;
	int rank[2];
}s[maxn];

bool cmp(record a, record b){
	if(a.score != b.score) return a.score > b.score;
	else return a.num < b.num;
}

int main(){
	int n, count = 0;
	cin >> n;
	int k[n], temp = 0;
	for (int i = 0; i < n; ++i){		
		cin >> k[i];
		for (int j = 0; j < k[i]; ++j){
			cin >> s[count].num >> s[count].score;
			s[count].local = i + 1;
			count++;
		}
		sort(s + temp, s + count, cmp);		
		s[temp].rank[1] = 1;
		for (int j = 1; j < k[i]; ++j){
			if(s[temp + j].score == s[temp + j - 1].score) {
				s[temp + j].rank[1] = s[temp + j - 1].rank[1];
			}
			else{
				s[temp + j].rank[1] = j + 1;
			}
		}
		temp += k[i];
	}
	sort(s, s + count, cmp);		
	s[0].rank[0] = 1;
	for (int j = 1; j < count; ++j){
		if(s[j].score == s[j - 1].score) {
			s[j].rank[0] = s[j - 1].rank[0];
		}
		else{
			s[j].rank[0] = j + 1;
		}
	}
	cout << count << "\n";
	for (int i = 0; i < count; ++i)
	{
		cout << s[i].num <<" "<< s[i].rank[0] <<" "<< s[i].local <<" "<< s[i].rank[1]<<"\n";
	}
}
//22分，尝试了cin和cout确实有他的方便之处
//cin输入结束条件 ：遇到Enter、Space、Tab键

// 2
// 5
// 1 95
// 5 100
// 3 95
// 2 77
// 4 85
// 4
// 13 65
// 11 25
// 14 100
// 12 85






