#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
bool hashtable[1000] = {false};

int main(){
	string a, b;
	char c[100];
	cin >> a >>b;
	int lena = a.length();
	int lenb = b.length();
	int count = 0;
	for (int i = 0, j = 0; i < lena || j < lenb;){
		if (a[i] == b[j]){
			i++;
			j++;
		}
		else{
			char temp = a[i];
			if(a[i] - 'a' >= 0 && a[i] - 'a' <= 26){
				temp = a[i] - 'a' + 'A';
			}
			if(hashtable[temp - '0'] == false){
				printf("%c", temp);
				hashtable[temp - '0'] = true; 
			}
			i++;
		}
	}
	return 0;
}
/*
1、i < lena || j < lenb 应该是||而不是&&，比如对于
	AB_CD_EF
	ABCE
	最后也可能有坏字符正好在b中没有，如果用&&则会提前结束
2、bool a[10] = {0}这种方法只能初始化为0
	如果 bool a[10] = {1} 只有第一个是1，后面全是0，切记
3、优先把小写字母转化为大写字母再处理，不然直接hash表判断
	小写和大写并不一样会重复计算
