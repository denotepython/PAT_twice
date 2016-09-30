#include <cstdio>
const int maxn = 21;

int main(){
	int n, half;
	char c;
	scanf("%d %c", &n, &c);
	if(n % 2 == 0) half = n / 2;
	else half = n / 2 + 1;
	for (int i = 0; i < n; ++i) printf("%c", c);
	printf("\n");
	for (int i = 0; i < half - 2; ++i)
	{
		printf("%c", c);
		for(int j = 0; j < n - 2; j++) printf(" ");
		printf("%c\n", c);
	}
	for (int i = 0; i < n; ++i) printf("%c", c);
	return 0;
}