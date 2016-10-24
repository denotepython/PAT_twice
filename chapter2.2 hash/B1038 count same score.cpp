#include <cstdio>
#include <iostream>
const int maxn = 101;
int hashtable[maxn] = {0};

int main(){
	int n, m, temp;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d", &temp);
		hashtable[temp]++;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; ++i){
		scanf("%d", &temp);
		printf("%d", hashtable[temp]);
		if(i < m - 1) printf(" ");
	}
	return 0;
}
