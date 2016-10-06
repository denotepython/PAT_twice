#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100001;

struct person
{
	char name[6];
	int year,month,day;
	bool valid;
}test[maxn];

bool cmp(person a, person b){
	if(a.year != b.year) return a.year < b.year;
	else if (a.month != b.month) return a.month < b.month;
	else return a.day < b.day;
}

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; ++i){
		scanf("%s %d/%d/%d", &test[i].name, &test[i].year, &test[i].month, &test[i].day);
		if(test[i].year > 2014 || (test[i].year == 2014 && test[i].month > 9) || (test[i].year == 2014 && test[i].month == 9 && test[i].day > 6)){
			test[i].valid = false;
		}
		else if(test[i].year < 1814 || (test[i].year == 1814 && test[i].month < 9) || (test[i].year == 1814 && test[i].month == 9 && test[i].day < 6)){
			test[i].valid = false;
		}
		else{
			test[i].valid = true;
			count++;
		}
	}
	sort(test,test + n,cmp);
	if (count == 0){
		printf("%d\n", count);
		return 0;
	}
	else{
		printf("%d ", count);
		for (int i = 0; i < n; ++i){
			if(test[i].valid == true){
				printf("%s ", test[i].name);
				break;
			}
		}
		for (int i = n - 1; i >= 0; --i){
			if(test[i].valid == true){
				printf("%s", test[i].name);
				break;
			}
		}
		return 0;
	}
}
//有一个2分的case开始没有通过，那就是0个有效日期的情况
//稍微麻烦一点的是两个边界日期，思路简单，但是写出来很长容易错
// 第二个if 要写成else if 不然计数会出错
// 再就是最开始的输入数据不用说设计一个数格式要是2012/09/03之类，而是分成year、month、day