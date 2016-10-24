#include <cstdio>
const int maxn = 1001;
int hashtable[maxn] = {0};

int main(){
	int n;
	int a, b, c;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%d-%d %d", &a, &b, &c);
		hashtable[a] += c;
	}
	int Max = 0, index;
	for (int i = 0; i < maxn; ++i)
	{
		if(hashtable[i] > Max){
			index = i;
			Max = hashtable[i];
		}
	}
	printf("%d %d\n", index, Max);
}