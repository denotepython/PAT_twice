#include <cstdio>
#include <cstring>
const int maxn = 10001;
 int main(){
 	int length, n1, n2, n3;
 	char s[maxn];
 	scanf("%s", &s);
 	length = strlen(s);
 	n1 = (length + 2) / 3;
 	n3 = n1;
 	n2 = length + 2 - n1 - n3;
 	for (int i = 0; i < n1 - 1; ++i)
 	{
 		printf("%c", s[i]);
 		for (int j = 0; j < n2 - 2; ++j) printf(" ");
 		printf("%c\n", s[length - i - 1]);
 	}
 	for (int i = 0; i < n2; ++i)
 	{
 		printf("%c", s[i + n1 - 1]);
 	}
 	return 0;
 }
