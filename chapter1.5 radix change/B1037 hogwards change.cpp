#include <cstdio>

struct money
{
	int g,s,k; //g == galleon, s == sickle , k == knut
}m1,m2,ans;

int main(){
	scanf("%d.%d.%d %d.%d.%d", &m1.g, &m1.s, &m1.k, &m2.g, &m2.s, &m2.k);
	int temp1 = (m1.g * 17 + m1.s) * 29 + m1.k;
	int temp2 = (m2.g * 17 + m2.s) * 29 + m2.k;
	int change = temp2 - temp1;
	if(change < 0) {
		printf("-");
		change *= -1;
	}
	ans.k = change % 29;
	ans.s = change / 29 % 17;
	ans.g = change / 29 / 17;
	printf("%d.%d.%d", ans.g, ans.s, ans.k);
	return 0;
}

//10.16.27 14.1.28
//14.1.28 10.16.27