#include <cstdio>

struct money
{
	int g,s,k; //g == galleon, s == sickle , k == knut
}m1,m2,ans;

int main(){
	scanf("%d.%d.%d %d.%d.%d", &m1.g, &m1.s, &m1.k, &m2.g, &m2.s, &m2.k);
	int temp1 = (m1.g * 17 + m1.s) * 29 + m1.k;
	int temp2 = (m2.g * 17 + m2.s) * 29 + m2.k;
	int sum = temp2 + temp1;
	ans.k = sum % 29;
	ans.s = sum / 29 % 17;
	ans.g = sum / 29 / 17;
	printf("%d.%d.%d", ans.g, ans.s, ans.k);
	return 0;
}
//18分，有一个case没有通过
//10.16.27 3.2.1
