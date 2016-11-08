#include <cstdio>

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	int first, next;
	scanf("%d", &first);
	sum += first * 6 + 5;
	for (int i = 1; i < n; ++i)
	{
		scanf("%d", &next);
		if(next > first){
			sum = (next-first) * 6 + sum;
		}
		else{
			sum = (first-next) * 4 + sum;
		}
		sum += 5;
		first = next;
	}
	printf("%d\n", sum);
}