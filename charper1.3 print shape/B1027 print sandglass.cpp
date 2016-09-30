#include <cstdio>
const int maxn = 50;
int min[maxn] = {0};

int main(){
	for (int i = 1; i < maxn; ++i)
	{
		min[i] = 2 * i * i -1;  //打表的思想
	}
	int n;
	char c;
	scanf("%d %c", &n, &c);
	int left, row;
	for (int i = 2; i < maxn; ++i)
	{
		if(min[i-1] < n and n < min[i]){
			row = i - 1;
			left = n - min[i-1];
			break;
		}
	}
	for (int i = row; i > 0	; --i)
	{
		for (int j = 0; j < (2 * row - 2 * i) / 2; ++j) printf(" ");
		for (int j = 0; j < 2 * i - 1; ++j) printf("%c", c);
		printf("\n");
	}
	for (int i = 2; i <= row; ++i)
	{
		for (int j = 0; j < (2 * row - 2 * i) / 2; ++j) printf(" ");
		for (int j = 0; j < 2 * i - 1; ++j) printf("%c", c);
		printf("\n");
	}
	printf("%d", left);
	return 0;
}

//有一个case超时？18分