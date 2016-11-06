#include <cstdio>
int main(){
	int n;
	double temp, sum;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i){
		scanf("%lf", &temp);
		sum += temp * i * (n-i+1);
	}
	printf("%.2f\n", sum);
}
//改成double才全部通过