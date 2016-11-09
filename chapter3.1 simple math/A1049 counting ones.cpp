#include <cstdio>

int main(){
	int n, left, now, right, sum;
	scanf("%d", &n);
	int a = 1;
	while(n / a != 0){
		left = n / (a * 10);
		now = (n % (a*10)) / a; //now = n / a % 10;
		right = (n % (a*10)) % a;
		if(now == 0) sum += left * a;
		else if(now == 1) sum += left * a + right + 1;
		else if(now > 1) sum += (left + 1) * a; 
		a *= 10;
	}
	printf("%d\n", sum);
}