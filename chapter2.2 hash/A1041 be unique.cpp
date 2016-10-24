#include <cstdio>
const int maxn = 10001;
int hashtable[maxn] = {0};

int main(){
	int first = 0, n, index;
	scanf("%d", &n);
	int temp[maxn];
	for (int i = 0; i < n; ++i){
		scanf("%d", &temp[i]);
		hashtable[temp[i]]++;
	}
	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		if(hashtable[temp[i]] == 1){
			printf("%d\n", temp[i]);
			flag = true;
			break;
		}
	}
	if(flag == false) printf("None\n");
	return 0;
}