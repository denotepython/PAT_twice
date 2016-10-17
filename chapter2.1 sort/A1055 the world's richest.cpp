#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxn = 100010;

struct forbes
{
	string name;
	int age;
	int worth;
}s[maxn];

bool cmp(forbes a, forbes b){
	if(a.worth != b.worth) return a.worth > b.worth;
	else if(a.age != b.age) return  a.age < b.age;
	else return a.name < b.name;
}

int main(){
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i){
		cin >> s[i].name >> s[i].age >> s[i].worth;
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < k; ++i){
		int m, amin, amax;
		int count = 0;
		cin >> m >> amin >> amax;
		printf("Case #%d:\n", i + 1);
		for(int j = 0; j < n; j++){
			if(s[j].age >= amin && s[j].age <= amax){
				if(count < m){
					cout << s[j].name << " ";
					printf("%d %d\n", s[j].age, s[j].worth);
					count++;
				}
			}
		}
		if(count == 0) printf("None\n");
	}
	return 0;
}
//21分，有一个case超时

// 12 4
// Zoe_Bill 35 2333
// Bob_Volk 24 5888
// Anny_Cin 95 999999
// Williams 30 -22
// Cindy 76 76000
// Alice 18 88888
// Joe_Mike 32 3222
// Michael 5 300000
// Rosemary 40 5888
// Dobby 24 5888
// Billy 24 5888
// Nobody 5 0
// 4 15 45
// 4 30 35
// 4 5 95
// 1 45 50










